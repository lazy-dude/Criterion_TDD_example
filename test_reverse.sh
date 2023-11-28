#!/bin/bash

clear

# -Werror 
clang -Wall -Wextra -pedantic -std=c11 -lcriterion reverse_number.c test_reverse_number.c -o test_reverse_number

if [ $? -eq 0 ]; then ./test_reverse_number ; fi
# ./test_reverse_number
