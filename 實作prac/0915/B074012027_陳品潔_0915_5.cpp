#include<stdio.h>
//����t�� 
int main (void){
	int a, b, c;
	printf("== ����t�� ==\n\n");
	printf("�w��Ө����t�� ! \n\n");
	printf("1. ��� : ");
	scanf("%d", &a);
	printf("\n2. �ƶq : ");
	scanf("%d", &b);
	printf("\n3. ��I���B : %d", a*b);
	printf("\n4. �ꦬ : ");
	scanf("%d", &c);
	printf("\n===================");
	printf("\n5. ��s : %d", c-a*b);
	printf("\n\n***����r���p�U***\n");
	printf("\n1. 500�� : %d �i\n", (c-a*b)/500);
	printf("2. 100�� : %d �i\n", ((c-a*b)%500)/100);
	printf("3. 50�� : %d �T\n", ((c-a*b)%100)/50);
	printf("4. 10�� : %d �T\n", ((c-a*b)%50)/10);
	printf("5. 5�� : %d �T\n", ((c-a*b)%10)/5);
	printf("6. 1�� : %d �T\n", (c-a*b)%5);
	
}
