#include<stdio.h>
//enter a number and print out all the even number which less than the enter number
int main(void){
    int i, a;
    printf("請輸入一個數字(0~100)：");
    scanf("%d", &a);
	for(i=0;i<a;i++){
		if (i%2 == 0)
		    printf("%d是偶數\n",i);
	}
    return 0;
}
