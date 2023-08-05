#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//for loop make some random numbers and print out the sum of the numbers
int main(void){
	int i, a, r, sum = 0; //sum設定為0 i,a,r並不影響後面情況 
	printf("請輸入一個數字(1~100)：");
	scanf("%d", &a);
	srand(time(NULL));
    for(i=1;i<=a;i++){
    	r = rand() % 500 + 1; //set a  ranndom number
    	printf("第%3d個隨機數是%3d\n", i, r);
    	sum += r;
	}
	printf("總合為%d", sum);
    return 0;
}
