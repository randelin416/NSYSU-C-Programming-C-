#include<stdio.h>
//輸入西元年份判斷是否為閏年 
int main(void){
	//輸入年分 
	int a;
	printf("請輸入年分 : ");
	scanf("%d", &a);
	//判斷閏年條件 
	if((a%4 == 0 && a%100 != 0) || (a%400 == 0 && a%3200 != 0)) //年份/4餘數為0且/100餘數不為0 或 年份/400餘數為0且/3200餘數不為0 
		printf("%d為閏年！\n", a);
	else
	    printf("%d不是閏年\n", a);
	return 0;
}
