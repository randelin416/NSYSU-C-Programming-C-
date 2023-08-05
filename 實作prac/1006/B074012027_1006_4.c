#include<stdio.h>
//make a randon number and play a game to guess the random number
int main(void){
	int a, r = 0;
	srand(time(NULL));
	r = rand() % 10 + 1; //set a  ranndom number
	while(a != r){ //looping until the number is correct
		printf("請輸入一個數字：");
        scanf("%d", &a);
        if(a == r)
            printf("猜對了！\n");
        else
			printf("猜錯了！\n");
	} 

    
    return 0;
}
