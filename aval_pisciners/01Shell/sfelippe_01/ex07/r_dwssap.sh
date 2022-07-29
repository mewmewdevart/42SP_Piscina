#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0 {print}' | cut -d ':' -f1 | rev | sort -r | awk 'NR=='$FT_LINE1',NR=='$FT_LINE2'{print}' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
