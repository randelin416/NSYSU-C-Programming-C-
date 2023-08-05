#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int i, num, count = 0;
	int arr[100];
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &num);
		if(num == -1)
			break;
		else
		{
			arr[i] = num;	
			count++;
		}
	}
	/*
	for(i = 0; i < count; i++)
	{
		printf("%4d", arr[i]);
	}
	*/
	int temp;
	for(i = 0; i < count; i++)
	{
		if(arr[i] == 0)
		{
			
		}
	}
	return 0;
}
