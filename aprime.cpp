// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"



int main()

{

	int i, prime, num, k = 1;



	for (prime = 1; prime>(k - 20); prime++)

	{

		num = 0;

		k++;



		for (i = 1; i <= prime; i++)

		{

			if (prime%i == 0)

			{

				num++;

			}

		}



		if (num == 2)

		{

			printf("%d\n", prime);

			k++;

		}

	}



	return 0;

}