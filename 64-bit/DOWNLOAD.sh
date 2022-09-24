#!/bin/bash
var1=$(dirname $BASH_SOURCE)
var2="/iconswitch"
var3=$var1$var2
echo "Attempting to find $var3..."
if test -f $var3; then
	echo "$var3 found"
	sudo cp -f $var3 /usr/bin
	echo "Made a copy to /usr/bin, you may now run iconswitch from the terminal"
else
	echo "$var3 not found, please re-install from github"
fi
