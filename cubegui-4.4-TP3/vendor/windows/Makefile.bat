
:: 
:: This file is part of the CUBE software (http:\\www.scalasca.org\cube%
::
:: Copyright (c) 2009-2014, 
::    Forschungszentrum Juelich GmbH, Germany
::    German Research School for Simulation Sciences GmbH, Juelich\Aachen, Germany
::
:: Copyright (c) 2009-2014, 
::    RWTH Aachen University, Germany
::    Gesellschaft fuer numerische Simulation mbH Braunschweig, Germany
::    Technische Universitaet Dresden, Germany
::    University of Oregon, Eugene, USA
::    Forschungszentrum Juelich GmbH, Germany
::    German Research School for Simulation Sciences GmbH, Juelich\Aachen, Germany
::    Technische Universitaet Muenchen, Germany
::
:: See the COPYING file in the package base directory for details.
::
:: maintainer Pavel Saviankou <p.saviankou@fz-juelich.de>


set MINGW="C:\MinGW"
set NSIS="C:\Program Files (x86)\NSIS"
set srcdir=..\..\
set PWD=%~dp0
set TARGET=C:\Scalasca-Soft\Install\Cube2.0\install


mkdir  %TARGET%\bin
mkdir  %TARGET%\lib
mkdir  %TARGET%\include\cube
mkdir  %TARGET%\include\cubew
mkdir  %TARGET%\include\cubegui
mkdir  %TARGET%\share\icons
mkdir  %TARGET%\share\doc\cube\examples

for %%f in ( 
GUI-qt-core 
GUI-qt 
GUI-plugin-graphwidgetcommon
GUI-plugin-heatmap
GUI-plugin-barplot
GUI-plugin-advanced-colormap
GUI-plugin-launch
GUI-plugin-sourcecodeviewer
GUI-plugin-statistics
GUI-plugin-systemboxplot
GUI-plugin-systemtopology
) do (
cd  %%f
qmake 
mingw32-make clean
mingw32-make
cd %PWD%
echo "Copy %%f..."
copy %%f\release\*.exe %TARGET%\bin
copy %%f\release\*.dll %TARGET%\bin
copy %%f\release\*.a   %TARGET%\lib
)


::GOTO:EOF

echo "Copy system libraries..."
copy %QTDIR%\bin\QtCore4.dll %TARGET%\bin
copy %QTDIR%\bin\QtGui4.dll %TARGET%\bin
copy %QTDIR%\bin\QtNetwork4.dll %TARGET%\bin
copy %QTDIR%\bin\QtSvg4.dll %TARGET%\bin
copy %QTDIR%\bin\QtHelp4.dll %TARGET%\bin
copy %QTDIR%\bin\QtDesigner4.dll %TARGET%\bin
copy %QTDIR%\bin\QtDesignerComponents4.dll %TARGET%\bin
copy %QTDIR%\bin\QtCLucene4.dll %TARGET%\bin
copy %QTDIR%\bin\QtDeclarative4.dll %TARGET%\bin
copy %QTDIR%\bin\QtMultimedia4.dll %TARGET%\bin
copy %QTDIR%\bin\QtOpenGL4.dll %TARGET%\bin
copy %QTDIR%\bin\QtScript4.dll %TARGET%\bin
copy %QTDIR%\bin\QtScriptTools4.dll %TARGET%\bin
copy %QTDIR%\bin\QtSql4.dll %TARGET%\bin
copy %QTDIR%\bin\QtTest4.dll %TARGET%\bin
copy %QTDIR%\bin\QtWebKit4.dll %TARGET%\bin
copy %QTDIR%\bin\QtXml4.dll %TARGET%\bin
copy %QTDIR%\bin\QtXmlPatterns4.dll %TARGET%\bin
copy %MINGW%\bin\libgcc_s_dw2-1.dll %TARGET%\bin
copy %MINGW%\bin\libstdc++*.dll %TARGET%\bin
copy %MINGW%\bin\mingwm10.dll %TARGET%\bin
copy C:\MinGW\msys\1.0\bin\msys-1.0.dll %TARGET%\bin
copy C:\MinGW\msys\1.0\bin\msys-z.dll %TARGET%\bin
copy C:\Work\regex-2.7-bin\bin\regex2.dll %TARGET%\bin
echo "Copy GUI header files..."
copy %srcdir%\src\GUI-qt\display\*.h  %TARGET%\include\cubegui\.





echo Copy Cube documentation..."
copy  %srcdir%\doc\CubeGuide.pdf %TARGET%\share\doc\cube
copy  %srcdir%\doc\CubeToolsDeveloperGuide.pdf %TARGET%\share\doc\cube
copy  %srcdir%\doc\CubeGuiPluginDeveloperGuide.pdf %TARGET%\share\doc\cube
@echo "Copy Cube images..."
copy  %srcdir%\share\icons\* %TARGET%\share\icons\.
@echo "Copy Cube license..."
copy  %srcdir%\COPYING %TARGET%\license.txt

echo "NOW COMPILE NSIS script..." 


