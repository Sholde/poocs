#!/bin/bash

if [ -z "$1" ] ; then
    exit 1
fi

name=$1
rm -Rf *$name
cp -r td3/ $name
tar -cvf $name.tar $name
gzip $name.tar
