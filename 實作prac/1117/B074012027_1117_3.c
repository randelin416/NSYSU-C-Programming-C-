#include<stdio.h>
#include<stdlib.h>
//using define to compute an area of the circle
#define pi 3.14
#define cir_area(n) n*n*pi

int main()
{
	int num;
	printf("請輸入圓的半徑：");
	scanf("%d", &num);
	printf("面積為：%f", cir_area(num));
}
