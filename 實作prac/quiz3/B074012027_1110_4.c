#include<stdio.h>
#include<stdlib.h>
//
int main(void)
{
	int i, len, check;
	char arr[20];
	printf("�п�J�n�P�_���r��G");
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
			printf("���r�ꤣ�O�j��\n");
	else
			printf("���r��O�j��\n");
	return 0;
}
