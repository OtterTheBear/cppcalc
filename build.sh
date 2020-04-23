#! /bin/bash

set -ex

rm -f ../bin/hyperops.o ../bin/main.o ../bin/main

c++ -c -o ../bin/hyperops.o hyperops.cpp
c++ -c -o ../bin/main.o main.cpp

g++ -o ../bin/main ../bin/hyperops.o ../bin/main.o -lboost_math_c99


