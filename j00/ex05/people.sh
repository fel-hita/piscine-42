#!/bin/bash
ldapsearch -x -LLL uid="z*" | grep "cn: " | cut -c 5- | sort -rf