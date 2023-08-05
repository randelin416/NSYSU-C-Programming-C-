#include<stdio.h>
//insertion sort : search from backward to foward, find the approximately space of the value 
int main(void){
	int i, a[20];
	printf("排序順序(大到小)\n");
	//print out the random numbers (20)
	printf("排序前：");
	srand(time(NULL));
	for(i = 0; i < 20; i++)
	{
		a[i] = rand() % 200 + 1;
		printf("%d ", a[i]);
	}
	printf("\n");
	//insertion sorting//
	int k, j, temp; //temp to record the temp values
	for(k = 1; k < 20; k++) //start from k = 1
	{
		temp = a[k];
		for(j = k - 1; j >= 0; j--) //search from backward to foward
		{
			if(temp > a[j]) //sorting from large to small
			{
				a[j + 1] = a[j];
			}
			else break;
		}
		a[j + 1] = temp;
	}
	//print out the random numbers after sorting
	printf("排序後：");
	for(i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
