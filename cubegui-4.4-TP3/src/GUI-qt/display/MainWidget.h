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



#ifndef _MAINWIDGET_H
#define _MAINWIDGET_H

#include <QSplitter>
#include <QComboBox>
#include <QLineEdit>
#include <QMainWindow>
#include <QStatusBar>
#include <QMenuBar>
#include <QPushButton>
#include <QSettings>
#include <QStackedWidget>
#include <QProgressDialog>
#include <QTextBrowser>
#include <QScrollArea>
#include "Cube.h"
#include "CubeTypes.h"
#include "Constants.h"
#include "Settings.h"
#include "Globals.h"
#include "StatusBar.h"
#include "SettingsHandler.h"

namespace cube
{
class Cube;
}

namespace cubepluginapi
{
class PluginServices;
}

namespace cubegui
{
class TabWidget;
class ColorWidget;
class ValueWidget;
class PrecisionWidget;
class FontWidget;
class ColorScale;
class Settings;
class TabManager;
class ColorMap;
class SynchronizationToolBar;
class WidgetWithBackground;
class ReadCubeThread;

// this class defines the main window of the GUI
class MainWidget : public QMainWindow, public InternalSettingsHandler
{
    Q_OBJECT

public:
    enum CubeContext { CONTEXT_CUBE, CONTEXT_INIT, CONTEXT_FREE };

    /********************public methods *****************/

    MainWidget( cube::CubeStrategy strategy = cube::CUBE_ALL_IN_MEMORY_STRATEGY );
    ~MainWidget();

    // load the contents of a cube fie into a cube object
    // and display the contents
    bool
    readFile( const QString openFileName );

    // sets the status bar text
    void
    setMessage( const QString& message,
                MessageType    type = Information,
                bool           isLogged = true );

    // InternalSettingsHandler interface
    void
    loadExperimentSettings( QSettings& );
    void
    saveExperimentSettings( QSettings& );
    void
    saveGlobalStartupSettings( QSettings& settings );
    void
    loadGlobalStartupSettings( QSettings& settings );
    void
    saveGlobalSettings( QSettings& settings );
    void
    loadGlobalSettings( QSettings& settings );
    void
    setContext( const CubeContext& context );
    void
    sendSettingsToClipboard(); // see ClipboardToolBar
    void
    loadStatus( QSettings& settings );
    void
    saveStatus( QSettings& settings );
    QString
    settingName();

private slots:
    void
    configureCallTreeLabel();

    void
    cubeReportLoaded();

    void
    openCube( cube::Cube*    cube,
              const QString& filename = "" );

    // input a file name to open and open it via readFile(...)
    void
    openFile();

    // re-open the last file, the second last file, etc.
    void
    openLastFiles();

    // remove loaded data
    void
    closeFile();


    // save a copy of cube
    void
    saveAs();

    // input a file name to open as external file for external percentage
    // and open it via readExternalFile(...)
    bool
    openExternalFile();

    // remove loaded external data for external percentage
    void
    closeExternalFile();

    // closes the application after eventually saving settings
    void
    closeApplication();

    // set the order of metric/call/system splitter elements
    void
    setDimensionOrder();

    // displays a short intro to cube
    void
    introduction();

    // shows the about message
    void
    about();

    // list all mouse and keyboard control
    void
    keyHelp();

    // saves a screenshot in a png file
    // (it is without the shell frame, I could not find any possibilities to include that frame within qt)
    void
    screenshot();

    // sets the file size threshold above which dynamic loading of metric data is enabled
    void
    setDynloadThreshold();

    // sets the busy cursor
    void
    setBusy( bool busy );

    void
    updateColormapMenu();

    // causes to open a color dialog to allow the user to change color-specific settings
    void
    editColorMap();

    // allow to select one of the registered colormaps
    void
    selectColorMap();

    // react on signal ColorMap::colorMapChanged()
    void
    updateColorMap( ColorMap* map = 0 );

    // causes to open a precision dialog to allow the user to change precision-specific settings
    void
    setPrecision();

    // causes to open a font dialog to allow the user to change
    // font and spacing for tree widgets
    void
    setFont();

    // trigers status of flattree
    void
    triggerStatusOfFlattree();

    // slot to apply the settings of the font widget
    void
    applyFont( FontWidget* fontWidget );

    // distribute the available width between the 3 tabs such that
    // from each scroll area the same percentual amount is visible
    void
    distributeWidth();

    // adapt the size of the main window such that
    // all informations are visible
    // and resize the splitter widget accordingly
    void
    adaptWidth();

    void
    selectExternalValueMode( TabWidget* widget );

    void
    onRegionInfo();

    void
    updateProgress();

    void
    recentFileSelected( const QString& link );

    void
    recentFileHovered( int idx = -1 );

    void
    receiveSettingsFromClipboard();

signals:

    /******************** signals *****************/

    void
    enableClose( bool ); // cube is loaded -> close buttons become active
    void
    enableExtClose( bool );

protected:
    virtual void
    closeEvent( QCloseEvent* event );
    virtual void
    dragEnterEvent( QDragEnterEvent* event );
    virtual void
    dropEvent( QDropEvent* event );

    /** handle status tip event, because ToolBar class is used instead of QToolBar */
    bool
    event( QEvent* e )
    {
        if ( e->type() == QEvent::StatusTip )
        {
            QStatusTipEvent* ev = ( QStatusTipEvent* )e;
            statusBar->addLine( ev->tip(), Information, false );
            ev->accept();
            return true;
        }
        return QMainWindow::event( e );
    }

private:
    /******************** private fields **********************/
    StatusBar*            statusBar;
    QStackedWidget*       stackedWidget;
    TabManager*           tabManager;
    ColorScale*           colorScale;
    QProgressDialog*      progress;
    QTimer*               timer;
    WidgetWithBackground* initialScreen;
    Settings*             settings;
    bool                  settingsAreInitialized;
    QString               lastColorMapName;
    bool                  fileLoaded; // true, if cube data is loaded from a file

    // flag to select load strategy...
    cube::CubeStrategy strategy;

    // the cube database for loaded data
    cube::Cube* cube;
    // the cube database for loaded external data for external percentage
    cube::Cube* cubeExternal;

    // stores at most 5 last opened files
    QStringList openedFiles;
    // stores the name of the current external file
    QString lastExternalFileName;
    // stores the actions for opening the last at most 5 files
    std::vector<QAction*> lastFileAct;
    // file menu containing u.o. the last file actions
    QMenu*   fileMenu;
    QMenu*   settingsMenu;
    QMenu*   mapMenu;            // color map selection menu
    QAction* colorsAct;          // color map edit action
    QAction* performanceInfoAct; // help menu item
    QAction* regionInfoAct;      // help menu item
    QAction* triggerStatusOfFlatTree;
    QAction* syncAction;
    int      timestamp;          // timestamp to check if clipboard content has changed

    // Saving cube actions
    QAction* saveAsAct;

    QAction*     selection1Act, * selection2Act;
    QAction*     splitterOrderAct;
    QScrollArea* recentFileWidget;

    SynchronizationToolBar* syncToolBar;

    // threshold for file size above which dynamic metric loading is enabled
    int dynloadThreshold;

    // the font for the tree display, user-definable
    QFont   treeFont;
    QString treeFontFamily;
    int     treeFontSize;
    QColor  treeSelectionColor;

    /******************** private methods **********************/

    // read the contents of a cube file into a temporary cube object for
    // the external percentage modus and compute the relevant values for the display
    bool
    readExternalFile( const QString fileName );

    // remember the names of the last 5 files that were opened;
    // they can be re-opened via the display menu
    void
    rememberFileName( QString fileName );

    // creates the pull-down menu
    void
    createMenu();

    // update the title of the application to show infos to the loaded file and external file
    void
    updateWidgetTitle();
    void
    setColorMap( ColorMap* map );

    /**
     * Go through color maps loaded in plugins in check whether one of them fits to name remembered in variable lastColorMapName
     * If yes, then set this map as active for Cube.
     */
    void
    loadColorMap();
    void
    createInitialScreen( QWidget* mainWidget );
};  // class MainWidget

class ReadCubeThread : public QThread
{
public:
    ReadCubeThread( cube::Cube*    cube,
                    const QString& filename );
    void
    run();
    bool
    isError();
    QString
    getErrorMessage();
    QString
    getFileName();

private:
    cube::Cube* cube;
    QString     filename;
    QString     errorMsg;
    bool        error;
};

/**
 * @brief The HoverLabel class is a QLabel which emits hovered, if the mouse pointer enters the label
 * Tried QLabel::linkHovered() first, but it doesn't always emit signals, only for the first time or if label is entered on the right side.
 */
class HoverLabel : public QLabel
{
    Q_OBJECT
public:
    HoverLabel( const QString& text, int index )  : QLabel( text )
    {
        mIndex = index;
    }

protected:
    void
    enterEvent( QEvent* )
    {
        emit hovered( mIndex );
    }
    void
    leaveEvent( QEvent* )
    {
        emit leave();
    }

signals:
    void
    hovered( int );

    void
    leave();

private:
    int mIndex;
};

class WidgetWithBackground : public QWidget
{
public:
    void
    setImage( const QPixmap& pixmap )
    {
        if ( !pixmap.isNull() )
        {
            QImage image = pixmap.toImage();
            for ( int i = 0; i < image.height(); i++ )
            {
                for ( int j = 0; j < image.width(); j++ )
                {
                    //int gray = qGray(image.pixel(j, i));
                    QColor color = QColor::fromRgb( image.pixel( j, i ) );
                    color.setHsv( color.hue(), color.saturation() * .5, color.value() * .7 );
                    image.setPixel( j, i, color.rgba() );
                }
            }
            pix = QPixmap::fromImage( image );
        }
        else
        {
            pix = QPixmap();
        }
        update();
    }

protected:
    void
    paintEvent( QPaintEvent* )
    {
        if ( !pix.isNull() )
        {
            QPainter painter( this );
            painter.setBackgroundMode( Qt::TransparentMode );

            if ( pix.size() != this->size() )
            {
                painter.drawPixmap( QPointF( 0, 0 ), pix.scaled( this->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation ) );
            }
            else
            {
                painter.drawPixmap( QPointF( 0, 0 ), pix );
            }
        }
    }

private:
    QPixmap pix;
};

class MoveableWidget : public QWidget
{
    Q_OBJECT

public:
    MoveableWidget( QWidget* parent = 0 ) : QWidget( parent )
    {
        childEnter = 0;
        isMoveable = false;
    }

    /**
     * if the mouse is over the widget w, moving is disabled
     */
    void
    disableMoving( QWidget* w )
    {
        w->installEventFilter( this );
    }

protected:
    void
    mousePressEvent( QMouseEvent* evt )
    {
        if ( isMoveable )
        {
            setCursor( Qt::ClosedHandCursor );
        }
        pos = evt->globalPos();
    }
    void
    mouseReleaseEvent( QMouseEvent* )
    {
        setCursor( Qt::OpenHandCursor );
    }
    void
    mouseMoveEvent( QMouseEvent* evt )
    {
        if ( isMoveable )
        {
            QPoint delta = evt->globalPos() - pos;
            int    newX  = x() + delta.x();
            int    newY  = y() + delta.y();
            int    maxX  = parentWidget()->width() - this->width();
            int    maxY  = parentWidget()->height() - this->height();

            if ( newX > maxX )
            {
                newX = maxX;
            }
            else if ( newX < 0 )
            {
                newX = 0;
            }
            if ( newY > maxY )
            {
                newY = maxY;
            }
            else if ( newY < 0 )
            {
                newY = 0;
            }

            move( newX, newY );
        }
        pos = evt->globalPos();
    }

public:
    /** isMovable should be set to true, if the mouse is inside the MoveableWidget but not inside one of
     * its children set by disableMoving() */
    bool
    eventFilter( QObject*, QEvent* event )
    {
        if ( event->type() == QEvent::Enter )
        {
            childEnter++;
        }
        else if ( event->type() == QEvent::Leave )
        {
            childEnter--;
        }

        if ( childEnter == 0 ) // cursor is on parent widget
        {
            setCursor( Qt::OpenHandCursor );
            isMoveable = true;
        }
        else     // cursor is inside a child widget
        {
            setCursor( Qt::ArrowCursor );
            isMoveable = false;
        }
        return false;
    }

private:
    QPoint pos;
    int    childEnter; // count the number of children, the cursor has moved into
    bool   isMoveable;
};
}
#endif
