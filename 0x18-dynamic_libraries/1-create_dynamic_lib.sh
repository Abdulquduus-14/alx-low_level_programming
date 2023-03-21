#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o -L liball.so *.o
