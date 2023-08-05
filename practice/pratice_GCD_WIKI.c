#include<stdio.h>
#include<stdlib.h>
//
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(b)
	{
		while((a %= b) && (b %= a))
		{
			printf("a = %d, b = %d\n", a, b);
		}
		int gcd =  a + b; 
		printf("gcd = %d", gcd);
	}
}
 
