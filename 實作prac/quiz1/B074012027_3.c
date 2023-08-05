#include<stdio.h>
//將大寫字母轉換為小寫 
int main(void) {
	char c;
	printf("請輸入一個大寫字母 : ");
	scanf("%c", &c);
	c = c - 'A' + 'a'; //使用ASCII碼將大寫轉換為小寫 
	printf("你輸入的字母小寫是%c\n", c);
	return 0;
}
