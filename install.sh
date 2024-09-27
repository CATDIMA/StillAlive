#!/bin/bash

if [ $USER != "root" ]
then
    echo "Run install.sh as root user, please"
    exit 0
fi

mkdir build
cd build
cmake ..
cmake --build . --config Release
cmake --install . --config Release 
rm -rf ./build