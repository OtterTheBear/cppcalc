#! /bin/bash

set -ex

time ../bin/main trt 3 3

time ./ttrt2.py
