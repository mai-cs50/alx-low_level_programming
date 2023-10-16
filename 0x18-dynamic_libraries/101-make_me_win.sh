#!/bin/bash
wget -p /tmp http://github.com/mai-cs50/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
