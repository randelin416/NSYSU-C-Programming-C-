#include<stdio.h>
//set an array and put random numbers 1 to 100 in it
int main(void){
	int i, a[10] ;
	srand(time(NULL));
	for(i=0;i<10;i++){
		a[i] = rand() % 100 + 1;
		printf("��%d�ӼƦr���G%d\n", i+1, a[i]); //from number 1
	}
	return 0;
}
