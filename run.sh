#!/bin/bash

rm ftest a.out a.out.dSYM
gcc -o ftest -Wno-format-invalid-specifier -Wno-format -Wno-macro-redefined -Wno-implicitly-unsigned-literal main.c libftprintf.a
./ftest
rm ftest a.out a.out.dSYM

# before executing change rights to 755