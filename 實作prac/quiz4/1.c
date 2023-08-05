#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void swap(int *a, int *b){
	// �洫��� 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int array[],int size){
	// ��ܱƧǺt��k 
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
	puts("�Ƨǫe");
	for(index=0;index<10;index++){
		array[index] = rand();
		printf("%d ",array[index]);
	}
	puts("");
	puts("�Ƨǫ�");
	sort(array,10);
	for(index=0;index<10;index++){
		printf("%d ",array[index]);
	}
	puts("");
	return 0;
}
