#include<stdio.h>
//insertion sort : search from backward to foward, find the approximately space of the value 
int main(void){
	int i, a[20];
	printf("�ƧǶ���(�j��p)\n");
	//print out the random numbers (20)
	printf("�Ƨǫe�G");
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
	printf("�Ƨǫ�G");
	for(i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
