#include<stdio.h>

int main(void)
{
	
	int nums[100];
	printf("1.\n");
	int id[9] = {0, 7, 4, 0, 1, 2, 0, 2, 7};
	int i1, sum = 0, sec;
	printf("Name¡G³¯«~¼ä\nStudent ID¡G");
	for(i1 = 0; i1 < 9; i1++)
	{
		printf("%d", id[i1]);
		sum += id[i1];
	}
	sec = sum % 10;
	printf("\nMy secret code is %d\n", sec);
	
	
	return 0;
}
