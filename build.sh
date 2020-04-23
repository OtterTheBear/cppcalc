#! /bin/bash

set -ex

rm -f ../bin/hyperops.o ../bin/main.o ../bin/h

c++ -c -o ../bin/hyperops.o hyperops.cpp
c++ -c -o ../bin/main.o main.cpp

g++ -o ../bin/h ../bin/hyperops.o ../bin/main.o -lboost_math_c99


