#/bin/sh
apt-get update
echo $1 | sudo -S sudo apt-get install qt5-default
echo $1 | sudo -S sudo apt-get install libqt5webkit5-dev
echo $1 | sudo -S sudo apt-get install libqt5xmlpatterns5-dev
echo $1 | sudo -S sudo apt-get install libssl-dev
echo $1 | sudo -S sudo apt-get install libsecret-1-dev
echo $1 | sudo -S sudo apt-get install freeglut3-dev
echo $1 | sudo -S sudo apt-get install git
cd ~
git clone https://github.com/AzureAD/rms-sdk-for-cpp
cd rms-sdk-for-cpp
cd sdk
qmake
make
cd ../samples
qmake
make
cd ../bin
export LD_LIBRARY_PATH=`pwd`
cd ../scripts
echo $1 | sudo -S sudo ./build_and_test.sh
cd ../bin
cp tests/*UnitTests .
./rmscryptoUnitTests -xunitxml > rmsUnitTestResults.txt
./rmsauthUnitTests -xunitxml >> rmsUnitTestResults.txt
./rmsplatformUnitTests -xunitxml >> rmsUnitTestResults.txt
mv rmscryptoUnitTests tests/.
mv rmsauthUnitTests tests/.
mv rmsplatformUnitTests tests/.
mv rmsUnitTestResults.txt tests/.
cd ../../myagent
powershell ./rmsUnitTestParser.ps1