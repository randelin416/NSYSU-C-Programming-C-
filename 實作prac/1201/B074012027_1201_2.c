#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n1 = 5;
	int n2 = 3;
	
	printf("n1：%d\n", n1);
	printf("n2：%d\n", n2);
	printf("n1的位址：%p\n", &n1);
	printf("n2的位址：%p\n", &n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	return 0;
} 
