#include<stdio.h>
//依指定格式列印出輸入之數值 
int main(void) {
	float a;
	printf("請輸入一個數 : ");
	scanf("%f", &a);
	printf("%10.1f\n", a);
	printf("%010.2f\n", a);
	printf("%+10.4f\n", a);
	printf("%.3f\n", a);    //取小數點後三數 
	return 0;
}
