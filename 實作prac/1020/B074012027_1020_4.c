#include<stdio.h>
//linear search : 
int main(void){
	int i, search, a[20];
	printf("線性搜尋\n");
	//print out the random numbers (20)
	printf("數列：");
	srand(time(NULL));
	for(i = 0; i < 20; i++)
	{
		a[i] = rand() % 15 + 1;
		printf("%d ", a[i]);
	}
	//enter a numer to search//
	printf("\n搜尋數字：");
	scanf("%d", &search);
	//linear search//
	printf("搜尋數字在第 ");
	for(i = 0; i < 20; i++)
	{
		if(a[i] == search)
		{
			printf("%d ", i + 1);
		}
	}
	printf(" 個位置\n");
	return 0;
}
