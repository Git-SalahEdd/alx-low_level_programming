#!/bin/bash
wget -P /tmp https://github.com/Git-SalahEdd/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libinjc.so
export LD_PRELOAD=/tmp/libinjc.so
