#!/bin/bash

# args :
#	1 : the binary to run
#	2 : the XML file to test on
#	3 : the unitary test file (containing the various expressions to test)
# example :
#	./test/unitary_test.sh ./bin/parserXML.exe ./test/test.xml ./test/unitary_test | awk -F'\t' '{print $1,$2,$1 == $2}' | grep -n "0$"

awk -F '\t' '{OFS="";cmd="'$1' \"" $1 "\" '$2'";while (cmd | getline line){print "\"",line,"\"\t\"",$2,"\""};close(cmd)}' $3