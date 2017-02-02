#!/bin/sh
#I was going to write a Makefile, but I was feeling lazy
cc=gcc
#compile with O3 to remove debugging symbols
$cc -O3 -Wall src/main.c -o runme.out
