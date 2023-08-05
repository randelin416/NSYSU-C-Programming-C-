#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void f(int *n1, int *n2, int *n3)
{
	int temp;
	if(*n1 > *n2)
	{
		if(*n2 > *n3)
		{
			temp = *n1;
			*n1 = *n3;
			*n3 = temp;
		}
		else if(*n3 > *n2)
		{
			if(*n1 > *n3) //1>3>2
			{
				temp = *n1;
				*n1 = *n2;
				*n2 = *n3;
				*n3 = temp;
			}
			else if(*n3 > *n1) //3>1>2
			{
				temp = *n1;
				*n1 = *n2;
				*n2 = temp;
				*n3 = *n3;
			}
		}
	}
	else if(*n2 > *n1)
	{
		if(*n1 > *n3)
		{
			temp = *n1;
			*n1 = *n3;
			*n3 = *n2;
			*n2 = temp;
		}
		else if(*n3 > *n1)
		{
			if(*n2 > *n3)
			{
				temp = *n2;
				*n2 = *n3;
				*n3 = temp;
			}
			else if(*n3 > *n2)
			{
				*n1 = *n1;
				*n2 = *n2;
				*n3 = *n3;
			}
		}
	}
	
}

int main()
{
	int n1, n2, n3;
	printf("請輸入三變數(eg. 3 1 2)：\n", n1);
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	
	f(&n1, &n2, &n3);
	
	printf("三數由小排到大：\n");
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	return 0;
} 
