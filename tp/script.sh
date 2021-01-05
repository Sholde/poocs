#!/bin/bash

if [ -z "$1" ] ; then
    exit 1
fi

name=$1
rm -Rf *$name
mkdir $name
cp -r td3/ $name/td3
cp -r td4/ $name/td4
tar -cvf $name.tar $name
gzip $name.tar
