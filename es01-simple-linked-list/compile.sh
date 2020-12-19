#!/bin/bash

# $1 is something like test01: compiles it together with SimpleList.cpp and produce an executable named "test01"
g++ -O0 -g -o "$1" "$1.cpp" SimpleList.cpp
