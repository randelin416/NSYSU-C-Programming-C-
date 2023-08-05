#include<stdio.h>
#include<stdlib.h>
//find the error of the example which want to swap a and b
//int myswitch(int *, int *);
int myswitch(int , int );
int a = 0, b = 1;
int main (void)
{
	//int a = 0, b = 1;
	//myswitch(&a, &b); 傳址不用接a值 
	a = myswitch(a, b);
	printf("a = %d, b = %d\n", a, b);
}
/*
void myswitch(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return a;
}
*/
int myswitch(int a, int c)
{
	int tmp;
	tmp = a;
	a = c;
	b = tmp;
	return a;
}
