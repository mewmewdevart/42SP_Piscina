#!/bin/bash
id -G -n $FT_USER | sed 's/ /,/g' | tr -d '\n'
