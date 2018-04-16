#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>




#define YES 1

#define NO   0




int is_prime(int n);




int main()

{
#if 1
	int i = 7;
#endif
	int i;
	for (;;)
	{
		scanf("%d", &i);
		if (is_prime(i) == 1)

			printf("%d is a prime\n", i);

		else

			printf("%d is NOT a prime\n", i);
	}
	

}




int is_prime(int n)

{

	int a;

	int result = 1;

	for (a = 1; a < n; a++)

		result = result * a%n;

	result = result % n;

	if (result == n - 1)

		return YES;

	else

		return NO;

}



