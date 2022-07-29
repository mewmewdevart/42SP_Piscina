#!/bin/sh

FT_LINE2=$FT_LINE2+1
FT_diff=$(($FT_LINE2-$FT_LINE1))

cat /etc/passwd | grep -v '^#' | awk '{ if(NR % 2 == 0) print }' | rev | cut -d ":" -f7 | sort -r | sed 's/$/,/g' | tr "\n" " " | cut -d "," -f1 -$FT_DIFF | tr "\n" "."
