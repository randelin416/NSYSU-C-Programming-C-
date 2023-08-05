#include<stdio.h>
//輸入一字元並輸出其ASCII碼 
int main(void) {
	char a;
	printf("Input a letter : ");
	scanf("%c", &a);
	printf("ASCII code of %c is %d", a, a); //注意需要給予兩次a 且兩者以不同形式輸出 
	return 0;
}
