#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[100];
	char *ptrarr[100];
	
	printf("��J�r��G");
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
	
	//printf("\n�r����סG%d\n", len);
	printf("����r��G");
	
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
