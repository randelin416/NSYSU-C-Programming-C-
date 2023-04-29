#include<stdio.h>
/*
主旨：四則運算 
日期：16.09.22
作者：陳品潔_B074012027
*/
int main(void) {
	float a, b;
	printf("請輸入a的值：");
	scanf("%f", &a);
	printf("\n請輸入b的值：");
	scanf("%f", &b);
	printf("\na-b = %f", a-b);
	printf("\nb*(a-b) = %f", b*(a-b));
	printf("\na+b*(a-b) = %f", a+b*(a-b));
	printf("\n[a+b*(a-b)]/b = %f", (a+b*(a-b))/b); //錯誤：b要!=0 
}
