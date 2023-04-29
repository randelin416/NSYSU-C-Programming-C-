#include<stdio.h>
//輸入一金額並列印出以不同價格拆分之結果 
int main(void) {
	int a;
	printf("How much is it (1~999) : ");
	scanf("%d", &a);
	printf("\nNT 100 : %d", a/100);
	printf("\nNT 50 : %d", a%100/50);
	printf("\nNT 10 : %d", a%50/10);
	printf("\nNT 5 : %d", a%10/5);
	printf("\nNT 1 : %d", a%5);
	return 0;
}
