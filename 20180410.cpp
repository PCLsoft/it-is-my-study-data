// 20180410.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


#if 0
int main()
{

	int n = 5;
	int i;
	int result=1;
	for (i = 1; i <= n; i++)
	{
		result=result*i;
	}
	printf("result is %d", result);
#endif //5! 표현하는 법.
#if 0 //윌슨정리를 이용한 소수 판별기 단 17부터는 안됨.-너무 길어서
	int i;
	int result = 1;
	for (i = 1; i < n; i++)
		result = result*i;
	result = result % n;
	if (result == n - 1)// if문에 한줄만 있을경우 {}생략이 가능하다.
		printf(" %d is a prime", n);
	else 
		printf("%d is not prime", n);
#endif
#if 0 //17이 나오는 소수 판별기, n이 너무 커지면 윌슨정리를 못쓴다. 따라서 소수판별은 다른것을 보통 사용하다.
	int n = 17;
	int i;
	int result = 1;
	for (i = 1; i < n; i++)
		result = (result*i) % n;
	if (result == n - 1)// if문에 한줄만 있을경우 {}생략이 가능하다.
		printf(" %d is a prime", n);
	else
		printf("%d is not prime", n);

#endif
#if 0
	//f(x)=2x+1
	/*출력데이터형 함수명(함수인자)
	{
	return 출력
	}*/ //이를 토대로 함수를 만들어보자
	
	/* 
	출력데이터형 f(int x)
	{
	int ret = 2*x+1;
	return ret;
	}
	*/
	int f(int x)
	{
		int ret = 2 * x + 1;
		return ret;
	}
	int main()
	{
		int x = 10;
		int y = f(x);
		printf("y=%d\n", y);
		return 0;
	}
#endif
#if 0
    return 0;
}
#endif
#if 1 //Proto-Type
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int f(int x);

int main
{
	
}
#endif
/* macro*/