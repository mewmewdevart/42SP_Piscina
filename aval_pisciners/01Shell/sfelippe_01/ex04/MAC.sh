#!/bin/bash
ifconfig | grep ether | sed 's/ether//g' |  cut -d ' ' -f2
