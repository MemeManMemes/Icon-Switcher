#!/bin/bash
red=$'\e[1;31m'
green=$'\e[1;32m'
blue=$'\e[1;34m'
v0=$(dirname "${BASH_SOURCE[0]}")
v1="/32-bit/iconswitch"
iconvar="$v0$v1"
echo "Testing to see if $iconvar exists..."
if test -f "$iconvar"
then
	echo "$green$iconvar exists"
	sudo cp -f "$iconvar" "/usr/bin"
	sudo chmod u=rwx,g=rwx,o=rwx "/usr/bin/iconswitch"
	echo "$green$iconvar successfully moved to /usr/bin"
	echo "You may now run iconswitch from the terminal with the sudo command"
	exit 0
else
	echo "$red$iconvar does not exist"
	exit -1
fi
