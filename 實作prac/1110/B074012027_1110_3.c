#include<stdio.h>
#include<stdlib.h>
//
int Factorial(int x)
{
	int i, fac_re = 1;
	for(i = x; i > 0; i--)
	{
		fac_re *= i;
	}
	return fac_re;
}
int main(void)
{
	int num, fac_num;
	scanf("%d", &num);
	fac_num = Factorial(num);
	printf("My Chatting Room¡G\nA¡GWhat is the factorial of first of %d numbers¡H\nB¡G%d", num, fac_num);
		
	return 0;
}
