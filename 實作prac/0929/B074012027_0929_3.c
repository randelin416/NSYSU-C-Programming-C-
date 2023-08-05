#include<stdio.h>
//輸入一數字判斷其大於等於或小於7 
int main(void){
	//輸入一1~13之整數
	int a;
	printf("請輸入1~13的整數 : ");
	scanf("%d", &a);
	//與7比大小
	if(a>7)
	    printf("該數大於7\n");
	else if(a<7)
	    printf("該數小於7\n");
	else
	    printf("該數等於7\n");
	return 0;
}
