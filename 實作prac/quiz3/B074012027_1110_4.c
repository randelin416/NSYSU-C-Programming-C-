#include<stdio.h>
#include<stdlib.h>
//
int main(void)
{
	int i, len, check;
	char arr[20];
	printf("請輸入要判斷的字串：");
	gets(arr);
	len = strlen(arr);
	for(i = 0; i < len / 2; i++)
	{
		if(arr[i] != arr[len-i-1])
			check = 0;
		else
			check = 1;
	}
	if(check = 0)
			printf("此字串不是迴文\n");
	else
			printf("此字串是迴文\n");
	return 0;
}
