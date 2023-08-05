#include<stdio.h>
//selection sort : find the min in the unsorting array, put it to the front of the array, until the array was sorted
int main(void)
{
	int i, a[20];
	printf("排序順序(小到大)\n");
	//print out the random numbers (20)
	printf("排序前：");
	srand(time(NULL));
	for(i = 0; i < 20; i++)
	{
		a[i] = rand() % 200 + 1;
		printf("%d ", a[i]);
	}
	printf("\n");
	//selection sorting//
	int k, j, min, temp; //temp to record the temp values
	for(k = 0; k < 19; k++)
	{
		int min = k;
		for(j = k + 1; j < 20; j++)
		{
			if(a[j] < a[min]) //find the min so far
			{
				min = j; //record the min
			}
			
		}
		if(min != k);
		{
			temp = a[min]; //swap two variables
			a[min] = a[k];
			a[k] = temp;
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
