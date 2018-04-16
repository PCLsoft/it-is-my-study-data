// helloworld.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#if 0
    whatever comments, source codes/ but 0이 아닌 1을 넣으면 인식이 됨
#endif

int main()
{
#if 1
	char a = 15; /* signed 8-bit integer */
	char b = 'A'; //8-bit character
	printf("I wanna go home %d= 0x%08x \n ",a,a); //0x 쓰는 이유는 dec랑 hex랑 헷갈릴수 있기때문.%뒤에 x X 소문자 쓰면 소문자 나오고 대문자 쓰면 대문자나옴.
	/*%02x 는 16진수를 2자리로 나타내라는 것임. %2x는 앞에 0을 안채우지만 %02x는 앞에 0을 채워줌.*/
#endif
#if 0
	char a = 120; 
	char b = 125;
	char c = a * b;
	printf("%d * %d = %d", a,b,c); 
	return 0;
#endif
	//print 정수 1~100
	//loop 할때 쓰는 함수들, for,while 등등
	/*for(시작점;조건;증가량/감소량) {}*/
#if 0
	char a = 1;
	for (a =1 ; a <=5; a++)
	{
		printf("a = %d \n", a);
	}
	return 0;
#endif
#if 0
	char a = 1;
	for (a = 10; a >= 0; a--)
	{
		printf("a = %d \n", a);
	}
#endif
	//분기문  - if
	/*if(조건){}*/
#if 0
	char a = 200;
	if (a==100) //=이 하나면 항상 true가 됨 a! =100 은 if not
	{
		printf("a=100\n");

	}
	else
	{
		printf("a is not 100");
	}
#endif
#if 0
	//print even numbers in [1...20]  A%B 는 a를 b로 나눈 나머지
	char a = 1;
	for (a = 1; a <= 20; a++)
		if((a%2)==0)
	{
			printf("%d\n",a);
	}

#endif
#if 0
	//print even numbers in [1...20]  A%B 는 a를 b로 나눈 나머지
	int i;
	for (i=1; i <= 20; i++) 
		if ((i % 2) == 0) //홀수를 출력할때는 0이아니라 1을 넣으면된다.
		{
			printf("%d\n", i);
		}

#endif
#if 0
	//print even numbers in [1...20]  A%B 는 a를 b로 나눈 나머지
	int i;
	for (i = 1; i <= 20; i++)
		if ((i&0x1) == 0) 
		{
			printf("%d\n", i);
		}

#endif

	return 0;
}

