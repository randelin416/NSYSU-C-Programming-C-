#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//using malloc to create 3 int memory space, input 3 numbers then print them out
int main()
{
	int *num1 = malloc(sizeof(int));
	int *num2 = malloc(sizeof(int));
	int *num3 = malloc(sizeof(int));
	
	printf("請輸入第一個數：");
	scanf("%d", num1);
	printf("請輸入第二個數：");
	scanf("%d", num2);
	printf("請輸入第三個數：");
	scanf("%d", num3);
	
	printf("第1個數為%d\n", *num1);
	printf("第2個數為%d\n", *num2);
	printf("第3個數為%d\n", *num3);
	
	free(num1);
	free(num2);
	free(num3);
	return 0;
} 
