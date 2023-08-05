#include<stdio.h>
//т窥╰参 
int main (void){
	int a, b, c;
	printf("== т窥╰参 ==\n\n");
	printf("舧ㄓт窥╰参 ! \n\n");
	printf("1. 虫基 : ");
	scanf("%d", &a);
	printf("\n2. 计秖 : ");
	scanf("%d", &b);
	printf("\n3. や肂 : %d", a*b);
	printf("\n4. 龟Μ : ");
	scanf("%d", &c);
	printf("\n===================");
	printf("\n5. т箂 : %d", c-a*b);
	printf("\n\n***莱т秗布***\n");
	printf("\n1. 500じ : %d 眎\n", (c-a*b)/500);
	printf("2. 100じ : %d 眎\n", ((c-a*b)%500)/100);
	printf("3. 50じ : %d 猅\n", ((c-a*b)%100)/50);
	printf("4. 10じ : %d 猅\n", ((c-a*b)%50)/10);
	printf("5. 5じ : %d 猅\n", ((c-a*b)%10)/5);
	printf("6. 1じ : %d 猅\n", (c-a*b)%5);
	
}
