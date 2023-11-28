#!/bin/bash

clear

# -Werror 
clang -Wall -Wextra -pedantic -std=c11 reverse_number.c main_reverse_number.c -o reverse_number

if [ $? -eq 0 ]; then ./reverse_number ; fi
# ./reverse_number

