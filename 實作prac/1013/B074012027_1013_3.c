#include<stdio.h>
//set an array and put random numbers 1 to 100 in it, then find out its max & min
int main(void){
	int i, a [10];
	int num1, num2; //for no.__ number is max / min
	int max = 0; //max cannot be 0
	int min = 100; // min cannnot be 100
	srand(time(NULL));
	for(i=0;i<10;i++){
		a[i] = rand() % 100 + 1;
		//find maximum
		if(a[i] > max){
			max = a[i];
			num1 = i + 1;
		}
		//find minimum
		if(a[i] < min){
			min = a[i];
			num2 = i + 1;
		}
	}
	//print out
	printf("程材%d计ㄤ%d\n程材%d计ㄤ%d\n", num1, max, num2, min);
	return 0;
}
