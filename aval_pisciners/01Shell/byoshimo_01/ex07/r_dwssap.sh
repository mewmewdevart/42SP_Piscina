#!/bin/sh
cat /etc/passwd | sed '1,10d' | awk "NR %2 == 0" | awk -F ":" '{print $1}' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
