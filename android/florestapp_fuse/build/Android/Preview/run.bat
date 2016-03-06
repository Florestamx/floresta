:: This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\run.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" "%~dp0InfoMedic"
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0InfoMedic.apk" ^
    --package=com.InfoMedic ^
    --activity=InfoMedic ^
    --sym-dir="%~dp0InfoMedic\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
