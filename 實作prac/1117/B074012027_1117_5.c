#include<stdio.h>
#include<stdlib.h>
//enter a num then print out the that number of fib sequence
int i;
int main()
{
	int num;
	printf("�п�J�@��ơG");
	scanf("%d", &num);
	printf("�ƦC���G");
	for(i = 1; i <= num; i++)
	{
		printf("%4d", fib(i));
	}
	printf("\n");
}
int fib(int n)
{
	if(n <= 2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

