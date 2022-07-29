#!/bin/sh
cat /etc/passwd | grep -v "^#" | awk "NR%2==0" | rev | cut -d "*" -f2 | cut -c2- | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed 's/$/, /g' | tr -d "\n" | sed 's/, $/./'
