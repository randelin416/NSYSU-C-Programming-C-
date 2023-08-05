#include<stdio.h>

int main(void)
{
	printf("3.\n");
	int num3;
	printf("Input¡G");
	scanf("%d", &num3);
	int origin = num3, reverse = 0;
	while(num3 > 0)
	{
		int remain = num3 % 10;
		reverse = reverse*10 + remain;
		num3 /= 10;
	}
	printf("Output¡G");
	if(reverse == origin)
	{
		printf("true");
	}
	else if(num3 < 0)
		printf("false");
	else
	{
		printf("false");
	}
	return 0;
}
