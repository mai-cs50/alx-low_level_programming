#!/bin/bash
gcc -fPIC -cC *.c
gcc -shared *.o -o liball.so
