#include<stdio.h>
//根據輸入之0~100之數輸入限定區間字串 
int main(void){
	//鍵盤輸入一整數 
	int a;
	printf("請輸入一個整數字(0~100) : ");
	scanf("%d", &a);
	//判別數字區間 
	if(a<34 && a>=0) 
	    printf("幸運區\n");
	else if(a<101 && a>33)
	    printf("幸運區\n");
	else if(a>32 && a<73)
	    printf("GG了\n");
	else
	    printf("輸入的數字不再範圍內，請重新輸入");
	return 0;
}
