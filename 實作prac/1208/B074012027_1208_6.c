#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//using malloc to create 3 int memory space, input 3 numbers then print them out
int main()
{
	int *num1 = malloc(sizeof(int));
	int *num2 = malloc(sizeof(int));
	int *num3 = malloc(sizeof(int));
	
	printf("�п�J�Ĥ@�ӼơG");
	scanf("%d", num1);
	printf("�п�J�ĤG�ӼơG");
	scanf("%d", num2);
	printf("�п�J�ĤT�ӼơG");
	scanf("%d", num3);
	
	printf("��1�ӼƬ�%d\n", *num1);
	printf("��2�ӼƬ�%d\n", *num2);
	printf("��3�ӼƬ�%d\n", *num3);
	
	free(num1);
	free(num2);
	free(num3);
	return 0;
} 
