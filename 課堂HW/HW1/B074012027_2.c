#include<stdio.h>
/*
�D���G�|�h�B�� 
����G16.09.22
�@�̡G���~��_B074012027
*/
int main(void) {
	float a, b;
	printf("�п�Ja���ȡG");
	scanf("%f", &a);
	printf("\n�п�Jb���ȡG");
	scanf("%f", &b);
	printf("\na-b = %f", a-b);
	printf("\nb*(a-b) = %f", b*(a-b));
	printf("\na+b*(a-b) = %f", a+b*(a-b));
	printf("\n[a+b*(a-b)]/b = %f", (a+b*(a-b))/b); //���~�Gb�n!=0 
}
