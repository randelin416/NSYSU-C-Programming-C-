#include<stdio.h>
#include<stdlib.h>
//using define to compute an area of the circle
#define pi 3.14
#define cir_area(n) n*n*pi

int main()
{
	int num;
	printf("�п�J�ꪺ�b�|�G");
	scanf("%d", &num);
	printf("���n���G%f", cir_area(num));
}
