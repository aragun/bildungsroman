$logFile = "..\rms-sdk-for-cpp\bin\tests\rmsUnitTestResults.txt"

$xmlOutputFile = "..\rms-sdk-for-cpp\bin\tests\rmsUnitTestResults.xml"
$result = ""


$result,$file = Get-Content $logFile
$result = $result + "`n<testsuites>"

Clear-Content $xmlOutputFile

foreach($line in $file){

    Write-Host $line

    if(!$line.startsWith("<?xml")){

        $result = $result + "`n"+$line;
    }
}
$result = $result + "`n</testsuites>"
Write-Host $result

Add-content $xmlOutputFile -value $result
