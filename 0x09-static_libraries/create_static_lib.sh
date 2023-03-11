#!/bin/bash
gcc -Wall -Werror -Wexta -pedantic -c *.c
ar -rc liball.a *o
