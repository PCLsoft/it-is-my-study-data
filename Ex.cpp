// 중간고사 연습.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int is_prime(int i);

int main()
{
#if 0
	//Q1
	int p = 89;
	int q = 97;
	int N = p * q;
	printf("%d", N);
#endif
#if 0
	//Q2
	int p = 89;
	int q = 97;
	int b = 1;
	for (b = 1; b <= p; b++)
	{
		if (p%b == 0)
		{
			if (b == 1)
			{
				b++;
			}
			else
			{
				printf("%dis prime\n", p);
			}
		}
	}
	for (b = 1; b <= q; b++)
	{
		if (q%b == 0)
		{
			if (b == 1)
			{
				b++;
			}
			else
			{
				printf("%dis prime", q);
			}
		}
	}
	//만약 소수가 아니라면 출력이 안된다.

#endif
#if 0
	//Q3
	//p-1=a , q-1=b
long ed = 5 * 5069;
		int p = 89;
		int q = 97;
		int a = p - 1;
		int b = q - 1;
		int c = a * b;
		if (ed%c==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
#endif
#if 0
		//Q4
	int m = 1024;
		int e = 5;
		int N = 89 * 97;
		int c = (((((1024 % N) * 1024 % N) * 1024 % N) * 1024 % N) * 1024 % N) % N;
		
		printf("%d\n%d", c);

	
		
#endif
#if 1
		//Q5
		int N = 89 * 97;
		int c = (((((1024 % N) * 1024 % N) * 1024 % N) * 1024 % N) * 1024) % N;
		int z,x,d;
		for (d = 1; ; d++)
		{
			if (d == 5069)
			{
				
				z = (z * c)%N;
				printf("%d", z);
			}
			else
			{
				if (d == 1)
				{
					z = c;
					z = z % N;
					printf("%d\n", z);
				}
				else

				{
					z = (z * c)%N;
				}
			}
		}
#endif


    return 0;
}

