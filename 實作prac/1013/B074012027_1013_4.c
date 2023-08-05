#include<stdio.h>
//set some random coefficient for the polynomial (deg = 9), also print out its differentiation polynomial
int main(void){
	int i, num[10];
	srand(time(NULL));
	//polynomial
	for(i=0;i<10;i++){
		num[i] = rand() % 10;
		printf("%d * x^%d ", num[i], i); //each coefficient and power
		if(i<9)
		    printf("+ "); // cuz we dont want + show in the last
	}
	printf("\n");
	//differentiation polynomial
	for(i=0;i<10;i++){
		//dont need to print x^-1, its coefficient must be 0
		if(i>0){
			printf("%d * x^%d ", num[i] * i, i-1); //each coefficient and power (differentiation)
			if(i<9)
		    printf("+ "); // cuz we dont want + show in the last
		}
	}
	return 0;
}
