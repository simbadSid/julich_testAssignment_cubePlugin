/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/


#include "config.h"

#include "DerivedMetricEditor.h"
#include <QDebug>
#include <QScrollBar>
#include <QAbstractItemView>
#include <QTextBlock>
#include <QDebug>
#include <QCoreApplication>

#define COMPLETION_MINLENGTH 3

using namespace cubegui;

DerivedMetricEditor::DerivedMetricEditor()
{
    comp = new QCompleter();
    comp->setCompletionMode( QCompleter::PopupCompletion );
    comp->setModel( &completerModel );
    comp->setWidget( this );
    colons     = 0;
    isVariable = false;

    QObject::connect( comp, SIGNAL( activated( QString ) ),
                      this, SLOT( insertCompletion( QString ) ) );
}

void
DerivedMetricEditor::setKeywords( const QStringList& keys )
{
    keywords = keys;
    updateCompletationKeywords( "" );
}

/**
 * @brief DerivedMetricEditor::setCompletationKeywords
 * @param cprefix the typed token including '::'
 */
void
DerivedMetricEditor::updateCompletationKeywords( const QString& cprefix )
{
    QString prefix = cprefix;
    if ( isVariable )
    {
        prefix = "${" + prefix;
    }

    QStringList list;
    foreach( QString str, keywords )
    {
        if ( !isVariable && str.startsWith( "${" ) )
        {
            continue;
        }
        if ( str.startsWith( prefix ) ) // completion is available
        {
            // check completions that are available for current hierarchy
            int leftIndex = str.lastIndexOf( "::", prefix.length() );
            leftIndex = leftIndex > 0 ? leftIndex + 2 : 0;

            QString completionStr = str.mid( leftIndex );
            int     rightIndex    = completionStr.indexOf( "::" );
            completionStr = completionStr.mid( 0, rightIndex );

            if ( isVariable )
            {
                completionStr.replace( "${", "" ); // don't show ${ in popup list
            }
            if ( !list.contains( completionStr ) )
            {
                list.append( completionStr );
            }
        }
    }
    completerModel.setStringList( list );
    // foreach (QString str,list) qDebug() << "list: "<< str;qDebug() << prefix << "^";
}

void
DerivedMetricEditor::insertCompletion( const QString& completion )
{
    QTextCursor tc    = textCursor();
    int         extra = completion.length() - comp->completionPrefix().length();

    QString completed = tokenLeftToCursor() + completion.right( extra );

    if ( isVariable )
    {
        completed = "${" + completed;
    }

    // add "::" to completation if completation string is not yet finished
    bool addColons = true;
    foreach( QString str, keywords )
    {
        if ( str == completed ) // at least on completion is finished
        {
            addColons = false;
            break;
        }
    }
    QString add = addColons ? "::" : isVariable ? "}" : "";

    tc.insertText( completion.right( extra ) + add );
    setTextCursor( tc );

    if ( addColons )
    {
        checkCompletion(); // activate next completion popup
    }
}

QString
DerivedMetricEditor::tokenLeftToCursor() const
{
    QTextCursor tc        = textCursor();
    QString     block     = tc.block().text();
    int         cursorPos = tc.position() - tc.block().position(); // = tc.positionInBlock(); in Qt4.7

    QString left = block;
    left.truncate( cursorPos );

    QString token = left.split( QRegExp( "[] +-*/{}$,]" ) ).last(); // separates the token

    return token;
}

bool
DerivedMetricEditor::isVariableLeftToCursor() const
{
    QTextCursor tc        = textCursor();
    QString     block     = tc.block().text();
    int         cursorPos = tc.position() - tc.block().position(); // = tc.positionInBlock(); in Qt4.7

    QString left = block;
    left.truncate( cursorPos );

    QString token = left.split( QRegExp( "[] +-*/{}$,]" ) ).last(); // separates the token
    left.replace( token, "" );

    return left.endsWith( "${" );
}

/**
 * @brief DerivedMetricEditor::checkCompletion checks, if completion menu is available and pops it p.
 * @param showAlways show popup even if text is shorter than COMLETION_MINLENGTH
 */
void
DerivedMetricEditor::checkCompletion( bool showAlways )
{
    QString left             = tokenLeftToCursor();
    QString completionPrefix = left.length() > 0 ? left.split( "::" ).last() : "";

    bool currentIsVariable = isVariableLeftToCursor();

    int number = left.count( "::" ); // level of hierarchy of "::"
    if ( colons != number || currentIsVariable != isVariable )
    {
        colons     = number;
        isVariable = currentIsVariable;
        int     leftIndex = left.lastIndexOf( "::" );
        QString prefix    = leftIndex > 0 ? left.mid( 0, leftIndex + 2 ) : "";
        updateCompletationKeywords( prefix );
    }

    bool tooShort = !left.contains( "::" ) && ( completionPrefix.length() < COMPLETION_MINLENGTH );
    if ( tooShort && !showAlways )
    {
        comp->popup()->hide();
        return;
    }

    comp->setCompletionPrefix( completionPrefix );
    QRect cr = cursorRect();
    cr.setWidth( comp->popup()->sizeHintForColumn( 0 )
                 + comp->popup()->verticalScrollBar()->sizeHint().width() );

    comp->popup()->setCurrentIndex( comp->completionModel()->index( 0, 0 ) );
    comp->complete( cr ); // popup it up!
}

void
DerivedMetricEditor::keyPressEvent( QKeyEvent* e )
{
    // If popup is visible, the following keys are used by to completer and should be ignored by the editor,
    // e.g. Enter should select the current item and should not generate newline.
    if ( comp->popup()->isVisible() )
    {
        switch ( e->key() )
        {
            case Qt::Key_Enter:
            case Qt::Key_Return:
            case Qt::Key_Escape:
            case Qt::Key_Tab:
            case Qt::Key_Backtab:
                e->ignore();
                return; // let the completer do default behavior
            default:
                break;
        }
    }

    // CTRL+E is a shortcut to popup the completer even if there are not enough characters available
    // => don't send event to QTextEdit
    bool isShortcut = ( ( e->modifiers() & Qt::ControlModifier ) && e->key() == Qt::Key_E ); // CTRL+E
    if ( isShortcut )
    {
        e->ignore();
        checkCompletion( true );
        return;
    }

    QTextEdit::keyPressEvent( e ); // let QTextEdit handle the key event, e.g. cursor move or key press

    if ( e->text().isEmpty() )
    {
        comp->popup()->hide(); // don't show popup if cursor has moved
    }
    else
    {
        // first insert text, then call completer
        checkCompletion();
    }
}
