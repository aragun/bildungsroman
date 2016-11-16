call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\VsDevCmd.bat"
cd ..\sdk
call qmake sdk.pro -spec win32-msvc2013 "CONFIG+=debug" "CONFIG+=qml_debug"
call nmake
cd ..\samples
call qmake sdk.pro -spec win32-msvc2013 "CONFIG+=debug" "CONFIG+=qml_debug"
call nmake
cd ..\bin
copy tests\*UnitTest* .
rmscryptoUnitTestsd.exe -xunitxml > tests\rmsUnitTestResults.txt
rmsauthUnitTestsd.exe -xunitxml >> tests\rmsUnitTestResults.txt
rmsplatformUnitTestsd.exe -xunitxml >> tests\rmsUnitTestResults.txt