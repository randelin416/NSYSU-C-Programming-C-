#include<stdio.h>
#include<stdlib.h>
//do bubble sort to sort the data in test.txt, then do binary search to find the place of the data
int i;

//swap by pointer
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//Bubble Sort
void bubble(int *a)
{
	int k;
	for(k = 0; k < 99; k++)
	{
		for(i = 0; i < 99 - k; i++)
		{
			if(a[i] > a[i+1])
			{
				swap(&a[i], &a[i+1]);
			}
		}
	}
} 

//Binary Search
int binary(int num, int *a)
{
	int low = 0, high = 100;
	int check = 0;
	while(low < high)
	{
		int mid = (low + high) / 2;
		if(a[mid] == num)
		{
			return mid;
			check == 1;
			break;
		}
		else if(a[mid] > num)
			high = mid - 1;
		else if(a[mid] < num)
			low = mid + 1;
	}
	if(check == 0)
	{
		printf("此數不存在於資料中！\n");
		return -1;
	}
}

//print out the array
void print_array(int *a)
{
	for(i = 0; i < 100; i++)
		{
			printf("%d\n", a[i]);
		}
}

int main(void)
{
	FILE *fp_r;
	fp_r = fopen("test.txt", "r");
	int arr[100];
	
	if((fp_r = fopen("test.txt", "r")) == NULL)
		printf("test.txt File Error！");
	else
	{
		for(i = 0; i < 100; i++)
		{
			fscanf(fp_r, "%d", &arr[i]);
			//printf("%d\n", arr[i]);
		}
		
		//bubble sort
		bubble(arr);
		//print to console
		print_array(arr);
		
		//write the sorted data to sorted.txt
		FILE *fp_w;
		fp_w = fopen("sorted.txt", "w");
		if((fp_w = fopen("sorted.txt", "w")) == NULL)
			printf("sorted.txt File Error！");
		else
		{
			for(i = 0; i < 100; i++)
			{
				fprintf(fp_w, "%d\n", arr[i]);
			}
		}
		fclose(fp_w);
		
		//input a number to search
		int num;
		printf("請輸入要搜尋的Key：\n");
		scanf("%d", &num);
			
		//search the place of the number
		int place = binary(num, arr);
		
		//if the inout number is not in the data, place = -1
		if(place != -1)
			printf("Key：%d在第%d個位置\n", num, place);
	}
	fclose(fp_r);
	return 0;
}
