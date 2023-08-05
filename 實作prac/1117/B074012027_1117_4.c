#include<stdio.h>
#include<stdlib.h>
//define the len of an array by the user then print it out with random elements
#define len num
int i;
int main()
{
	int num;
	printf("請輸入陣列大小：");
	scanf("%d", &num);
	//printf("%d", len);
	int arr[len];
	srand(time(NULL));
	for(i = 0; i < len; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
	show(arr, len);
}
void show(int arr[], int len)
{
	for(i = 0; i < len; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");
}
