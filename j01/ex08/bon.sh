#!/bin/sh
ldapsearch -x -LLL sn="*bon*" sn | grep sn | cut -c 5- | rev | cut -d " " -f 1 | rev | wc -l | bc
