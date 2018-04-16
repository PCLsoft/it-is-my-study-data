#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1;
	int b=0;
	int c=a+b;
	int i;
	for(i=1;i<=20;i++)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",c);}
	return 0;
}
