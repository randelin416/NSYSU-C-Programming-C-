#include<stdio.h>
#include<stdlib.h>
//
int main(void){
	//sorted data//
	int i, search;
	int a[] = {2, 5, 8, 12, 13, 18, 21, 29, 37, 49, 97};
	printf("二元搜尋\n");
	printf("數列：");
	for(i = 0; i < 11; i++)
	{
		printf("%3d", a[i]);
	}
	//enter a numer to search//
	printf("\n搜尋數字：");
	scanf("%d", &search); 
	//set the high & low no.//
	int low = 0, high = 11-1;
	//print out first step
	int mid = (low + high) / 2;
	printf("剩餘資料：");
	for(i = 0; i < 11; i++)
	{
		printf("%3d", a[i]);
	}
	printf(" 中位數：%d", a[mid]);
	printf(" 位置：%d", mid + 1);
	//binary search//
	while(low <= high)
	{
		int mid = (low + high) / 2;
		//if the mid num = search num
		if(a[mid] == search)
		{
			printf("\n搜尋數字在第%d個位置\n", mid + 1);
			return 1; //if find out the number , turns true
			break;
		}
		//if the mid num > search num
		else if(a[mid] > search)
		{
			printf("\n剩餘資料：");
			for(i = low; i < mid; i++)
			{
				printf("%3d", a[i]);
			}
			int mid1 = (low + mid) / 2;
			printf(" 中位數：%d", a[mid1]);
			printf(" 位置：%d", mid1 + 1);
			//adjust the high pointer
			high = mid - 1;
		}
		//if the mid num < search num
		else if(a[mid] < search)
		{
			printf("\n剩餘資料：");
			for(i = mid + 1; i < high + 1; i++)
			{
				printf("%3d", a[i]);
			}
			int mid1 = (high + 1 + mid) / 2;
			printf(" 中位數：%d", a[mid1]);
			printf(" 位置：%d", mid1 + 1);
			//adjust the low pointer
			low = mid + 1;
		}
	}
	return 0;
}
