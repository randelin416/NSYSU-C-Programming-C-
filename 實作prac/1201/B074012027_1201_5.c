#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[100];
	char *ptrarr[100];
	
	printf("輸入字串：");
	gets(arr);
	int len = strlen(arr);
	
	int i;
	
	/*
	for(i = 0; i <= len; i++)
	{
		(*ptrarr)[i] = arr[len-i];
		printf("%c", arr[i]);
	}
	*/
	
	//printf("\n字串長度：%d\n", len);
	printf("反轉字串：");
	
	for(i = 0; i <= len; i++)
	{
		(*ptrarr)[i] = arr[len-i];
	}
		for(i = 1; i <= len; i++)
	{
		printf("%c", (*ptrarr)[i]);
	}
	
	return 0;
} 
