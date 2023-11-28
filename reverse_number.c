#include <stdio.h>
#include "reverse_number.h"

int reverse(int num)
{
    int rem = 0;
    int rev = 0;
    while(num != 0)
	{
		rem = num % 10;
		num = num / 10;
		rev = rev * 10 + rem;
	}
	return rev;
}

