#include<stdio.h>

int main(void) {
	int num, a, b, c, d;
	printf("Please enter number (1~15) : ");
	scanf("%d", &num);
	a = num % 2;
	b = num / 2 % 2;
	c = num / 2 / 2 % 2;
	d = num / 2 / 2 / 2 % 2;
	printf("Output : %d%d%d%d", d, c, b, a);
	return 0;
}
