#!/usr/bin/env bash

if [ -z $clash_conf ]; then
    echo "unset environment variable \$clash_conf"
    exit 1
fi

clashc status > /dev/null 2>&1
if [[ $? != 0 ]];then
    clashc start && sleep 1 && clashc set $clash_conf
fi
