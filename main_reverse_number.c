#include <stdio.h>
#include "reverse_number.h"

int main(void)
{
	int n;
	int rev = 0;
	printf("Enter A Number ");
	scanf("%d",&n);
	
	rev = reverse(n);
	
	printf("reverse is %d\n",rev);
	return 0;
}
