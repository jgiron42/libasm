#!/bin/zsh
for FILE in $(ls | grep "\.s$" | grep -v macos)
	cat $FILE | sed "s/ft\_/\_ft\_/g" > $(echo $FILE | sed "s/..$//g" | sed "s/_macos//g" )_macos.s
