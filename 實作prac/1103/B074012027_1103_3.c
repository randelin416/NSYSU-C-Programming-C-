#include<stdio.h>
#include<stdlib.h>
//input 3 words as a string, print them out, then recurse them, print the recursed string.
int main(void)
{
	int i;
	char str[3][10];
	
	//input the string
	printf("請輸入三字串：\n");
	for(i = 0; i < 3; i++)
	{
		scanf("%s", str[i]);
	}
	
	//print the string
	printf("三字串為：");
	for(i = 0; i < 3; i++)
	{
		printf("%s", str[i]);
		if(i < 2)
			printf(", ");
	}
	
	//recurse the string
	printf("\n");
	printf("反序為：");
	for(i = 2; i >= 0; i--)
	{
		printf("%s", str[i]);
		if(i > 0)
			printf(", ");
	}
	return 0;
}
