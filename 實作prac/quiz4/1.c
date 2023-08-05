#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void swap(int *a, int *b){
	// 交換整數 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int array[],int size){
	// 選擇排序演算法 
	int i, j;
	for(i = 0; i < size - 1; i++)
    {
    	int min = i;
        for(j = i + 1; j < size; j++)
        {
            if(array[min] > array[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
        	swap(&array[min], &array[i]);
		}
    }
}


int main(void){
	srand(time(NULL));
	int index, array[10];
	puts("排序前");
	for(index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	puts("");
	puts("排序後");
	sort(array,10);
	for(index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	puts("");
	return 0;
}
