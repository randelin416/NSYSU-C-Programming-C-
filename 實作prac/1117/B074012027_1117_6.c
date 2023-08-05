#include<stdio.h>
#include<stdlib.h>
//using recursion to compute the power of an input number
int pow(int a, int n)
{
	if(n == 0)
		return 1;
	else
		return a * pow(a, n-1);
}

int main()
{
	int num, n;
	printf("請輸入兩數：");
	scanf("%d %d", &num, &n);
	//int result = pow(num, n);
	printf("%d^%d = %d", num, n, pow(num, n));
}
