#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//doing two numbers operation by pointer function
int Add(int *num1, int *num2)
{
	printf("�����Ƭۥ[�禡\n"); 
	int result;
	result = *num1 + *num2;
	return result;
}
int Minus(int *num1, int *num2)
{
	printf("�����Ƭ۴�禡\n"); 
	int result;
	result = *num1 - *num2;
	return result;
}
int Multiple(int *num1, int *num2)
{
	printf("�����Ƭۭ��禡\n"); 
	int result;
	result = *num1 * *num2;
	return result;
}int Divide(int *num1, int *num2)
{
	printf("�����Ƭ۰��禡\n"); 
	int result;
	result = *num1 / *num2;
	return result;
}
int main()
{
	char op;
	int num1, num2, ans;
	printf("�п�J�n���檺�B��G"); 
	scanf("%c", &op);
	printf("�п�J�n�B�⪺�Ʀr�G");
	scanf("%d %d", &num1, &num2);
	switch(op)
	{
		case '+':
			ans = Add(&num1, &num2);
			printf("�p�⵲�G�G%d", ans);
			break;
		case '-':
			ans = Minus(&num1, &num2);
			printf("�p�⵲�G�G%d", ans);
			break;
		case '*':
			ans = Multiple(&num1, &num2);
			printf("�p�⵲�G�G%d", ans);
			break;
		case '/':
			ans = Divide(&num1, &num2);
			printf("�p�⵲�G�G%d", ans);
			break;
	} 
	return 0;
} 
