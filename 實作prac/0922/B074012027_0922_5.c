#include<stdio.h>
//輸入一數字一字母並同時列印兩者 
int main(void) {
	int a;
	char c;
	printf("請輸入一個數字 : ");
	scanf("%d", &a);
	printf("\n請輸入一個字母 : ");
	fflush(stdin); //清除緩衝區資料 否則執行LF動作會被第10行之scanf讀取 
	scanf("%c", &c);
	printf("\n我有 %d 個 %c ", a, c); //一樣須給出a與c才會列印到 
	return 0;
}
