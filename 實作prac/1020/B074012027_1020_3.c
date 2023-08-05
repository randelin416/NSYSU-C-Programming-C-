#include<stdio.h>
//bubble sort : from forward to backward, compare two if the values, if no.1 < no.2 (sorting from large to small), swap
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
	//bubble sorting//
	int k, j, temp; //temp to record the temp values
	for(k = 0; k < 19; k++) //start from k = 1
	{
		for(j = 0; j < 19 - k; j++) //-k to run more effective
		{
			if(a[j + 1] > a[j]) //sorting from large to small
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//print out the random numbers after sorting
	printf("排序後：");
	for(i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
