#include<stdio.h>
//print out the factorial of the enter number
int main(void){
	int i, a, fac = 1;
	printf("請輸入一個數字：");
	scanf("%d", &a);
	for (i=1;i<=a;i++)
	    fac *= i; //multiple from 1 to a
	printf("%d! = %d", a, fac);
	return 0;
}
