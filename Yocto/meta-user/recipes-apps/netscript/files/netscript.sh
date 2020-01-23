#!/bin/sh

RED='\033[0;31m'
GRN='\033[0;32m'
YEL='\033[0;33m'
BLU='\033[1;34m'
CYN='\033[0;36m'
NORM='\033[0m'

/etc/init.d/networking stop
ip link set eth0 address 02:01:02:03:AA:BB
/etc/init.d/networking start
/sbin/ifconfig eth0 192.168.12.108 netmask 255.255.255.0 up
    



