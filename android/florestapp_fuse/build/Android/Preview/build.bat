:: This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0InfoMedic\app\src\main"
set ANT_DIR=C:\Users\mmoraf\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.7.0_67

echo ## 1/2: libInfoMedic.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
echo ## 2/2: InfoMedic.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
"C:\Program Files (x86)\Fuse\uno.exe" cp InfoMedic/app/src/main/bin/InfoMedic-debug.apk InfoMedic.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
