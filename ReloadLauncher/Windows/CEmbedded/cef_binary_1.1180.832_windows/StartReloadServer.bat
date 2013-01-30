call StopNode.bat

cd MoSync_Reload_BETA_Windows
cd server
start bin\win\node.exe node_modules\weinre\weinre --boundHost -all-
start bin\win\node.exe main.js