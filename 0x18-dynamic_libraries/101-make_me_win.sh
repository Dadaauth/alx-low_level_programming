#!/bin/bash
gcc -shared -fPIC attack.c -o unrandom.so
export LD_PRELOAD=$PWD/unrandom.so
