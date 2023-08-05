#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//doing two numbers operation by pointer function
int Add(int *num1, int *num2)
{
	printf("執行兩數相加函式\n"); 
	int result;
	result = *num1 + *num2;
	return result;
}
int Minus(int *num1, int *num2)
{
	printf("執行兩數相減函式\n"); 
	int result;
	result = *num1 - *num2;
	return result;
}
int Multiple(int *num1, int *num2)
{
	printf("執行兩數相乘函式\n"); 
	int result;
	result = *num1 * *num2;
	return result;
}int Divide(int *num1, int *num2)
{
	printf("執行兩數相除函式\n"); 
	int result;
	result = *num1 / *num2;
	return result;
}
int main()
{
	char op;
	int num1, num2, ans;
	printf("請輸入要執行的運算："); 
	scanf("%c", &op);
	printf("請輸入要運算的數字：");
	scanf("%d %d", &num1, &num2);
	switch(op)
	{
		case '+':
			ans = Add(&num1, &num2);
			printf("計算結果：%d", ans);
			break;
		case '-':
			ans = Minus(&num1, &num2);
			printf("計算結果：%d", ans);
			break;
		case '*':
			ans = Multiple(&num1, &num2);
			printf("計算結果：%d", ans);
			break;
		case '/':
			ans = Divide(&num1, &num2);
			printf("計算結果：%d", ans);
			break;
	} 
	return 0;
} 
