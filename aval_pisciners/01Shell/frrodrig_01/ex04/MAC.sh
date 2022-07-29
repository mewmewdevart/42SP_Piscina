#!/bin/bash
ifconfig -a | grep 'ether' | sed 's/ether//' | cut -d' ' -f2 | cat -e
