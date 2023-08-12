#!/bin/bash
if [ "$(netstat -tuln | grep ":80")" == "" ]; then
    echo "80 not open"
else
    echo "80 open"
fi
if [ "$(netstat -tuln | grep ":22")" == "" ]; then
    echo "22 not open"
else
    echo "22 open"
fi
if [ "$(netstat -tuln | grep ":21")" == "" ]; then
    echo "21 not open"
else
    echo "21 open"
fi
if [ "$(netstat -tuln | grep ":25")" == "" ]; then
    echo "25 not open"
else
    echo "25 open"
fi
