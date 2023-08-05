#include<stdio.h>
//輸入99時判定為99 其他則印出為例外數字 
int main(void){
	int a;
	printf("請輸入一個數字 : ");
	scanf("%d", &a);
	
	switch(a){
		//輸入值為99時 
		case 99:
			printf("輸入了%d", a);
			break;
		//輸入值不為99時 
		default:
			printf("輸入了例外數字%d", a);
	}
	return 0;
}
