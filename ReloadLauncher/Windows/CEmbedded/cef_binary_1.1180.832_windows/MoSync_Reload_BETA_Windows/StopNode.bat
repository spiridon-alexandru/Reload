:: Check if node.exe is already running. If so, we kill the process
echo off
set running=0
for %%T in (`tasklist /nh /fi "imagename eq node.exe"`) do set running=1

IF %running% EQU 1 taskkill /im node.exe /f