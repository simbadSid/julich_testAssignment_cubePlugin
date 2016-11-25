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

#include <QCheckBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QPushButton>
#include "CallTreeLabelDialog.h"

using namespace cubegui;

CallTreeLabelDialog::CallTreeLabelDialog( QWidget* parent ) : QDialog( parent )
{
    oldConfig = Globals::getCallDisplayConfig();

    setWindowTitle( "Call Tree Label Settings" );
    QVBoxLayout* layout = new QVBoxLayout();
    setLayout( layout );

    QLabel* label = new QLabel( "Display C/C++ function names" );
    layout->addWidget( label );

    arguments = new QCheckBox( this );
    arguments->setText( "hide argument list" );
    layout->addWidget( arguments );

    ret = new QCheckBox( this );
    ret->setText( "hide return value" );
    layout->addWidget( ret );

    //==== C/C++ ==============================================
    hideScope = new QCheckBox( this );
    hideScope->setText( "hide function scope (namespace/class)" );
    layout->addWidget( hideScope );
    connect( hideScope, SIGNAL( toggled( bool ) ), this, SLOT( enableSlider( bool ) ) );

    sliderRow = new QWidget();
    layout->addWidget( sliderRow );

    slider = new QSlider( this );
    slider->setOrientation( Qt::Horizontal );
    slider->setMinimum( 0 );
    slider->setMaximum( 4 );
    connect( slider, SIGNAL( valueChanged( int ) ), this, SLOT( setSliderLabel() ) );
    QHBoxLayout* hlayout = new QHBoxLayout();
    hlayout->setContentsMargins( 0, 0, 0, 0 );
    sliderRow->setLayout( hlayout );
    label       = new QLabel( "Show up to level" );
    sliderValue = new QLabel();
    setSliderLabel();
    QCheckBox* empty = new QCheckBox();
    hlayout->addSpacing( empty->sizeHint().width() );
    hlayout->addWidget( label );
    hlayout->addWidget( sliderValue );
    hlayout->addWidget( slider );

    //==== Fortran ==============================================
    layout->addSpacing( 10 );
    label = new QLabel( "Display Fortran Subroutines" );
    layout->addWidget( label );

    modules = new QCheckBox( this );
    modules->setText( "hide modules" );
    layout->addWidget( modules );

    QDialogButtonBox* buttonBox = new QDialogButtonBox();
    buttonBox->addButton( QDialogButtonBox::Ok );
    QPushButton* applyButton = buttonBox->addButton( QDialogButtonBox::Apply );
    buttonBox->addButton( QDialogButtonBox::Cancel );

    layout->addWidget( buttonBox );

    ret->setChecked( oldConfig.hideReturnValue );
    arguments->setChecked( oldConfig.hideArguments );
    hideScope->setChecked( oldConfig.hideClassHierarchy > 0 );
    slider->setValue( oldConfig.hideClassHierarchy );
    modules->setChecked( oldConfig.hideModules );
    enableSlider( hideScope->isChecked() );

    connect( buttonBox, SIGNAL( accepted() ), this, SLOT( onOk() ) );
    connect( buttonBox, SIGNAL( rejected() ), this, SLOT( onCancel() ) );
    connect( applyButton, SIGNAL( clicked() ), this, SLOT( onApply() ) );
}

void
CallTreeLabelDialog::setSliderLabel()
{
    sliderValue->setText( QString::number( slider->value() ) );
}

void
CallTreeLabelDialog::enableSlider( bool ok )
{
    foreach( QObject * obj, sliderRow->children() )
    {
        QWidget* w = dynamic_cast<QWidget*> ( obj );
        if ( w )
        {
            w->setEnabled( ok );
        }
    }
}


void
CallTreeLabelDialog::onApply()
{
    CallDisplayConfig config = Globals::getCallDisplayConfig();

    config.hideArguments      = arguments->isChecked();
    config.hideReturnValue    = ret->isChecked();
    config.hideClassHierarchy = hideScope->isChecked() ? slider->value() : -1;
    config.hideModules        = modules->isChecked();

    Globals::setCallDisplayConfig( config );
    emit configChanged();
}

void
CallTreeLabelDialog::onOk()
{
    onApply();
    setVisible( false );
}

void
CallTreeLabelDialog::onCancel()
{
    Globals::setCallDisplayConfig( oldConfig );
    emit configChanged();
    setVisible( false );
}
