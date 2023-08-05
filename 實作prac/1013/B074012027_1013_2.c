#include<stdio.h>
//set an array and put random numbers 1 to 100 in it, then print out it sum & average
int main(void){
	int i, a [10], sum = 0;
	srand(time(NULL)); //each execution choose different random number
	for(i=0;i<10;i++){
		a[i] = rand() % 100 + 1;
		sum += a[i]; //sum in each loop
	}
	printf("加總為：%d\n平均為：%d\n", sum, sum/10);
	return 0;
}
