#include<stdio.h>
//將輸入的整數轉為絕對值印出 
int main(void){
	//由鍵盤輸入一整數
	int a;
	printf("請輸入一整數 : ");
	scanf("%d", &a);
	//判斷輸入值之正負
	if(a>=0)
	    printf("絕對值為 : %d\n", a);
	if(a<0)
	    printf("絕對值為 : %d\n", -a);
	return 0;
}
