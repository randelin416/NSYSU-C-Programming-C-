#include<stdio.h>
//��J�褸�~���P�_�O�_���|�~ 
int main(void){
	//��J�~�� 
	int a;
	printf("�п�J�~�� : ");
	scanf("%d", &a);
	//�P�_�|�~���� 
	if((a%4 == 0 && a%100 != 0) || (a%400 == 0 && a%3200 != 0)) //�~��/4�l�Ƭ�0�B/100�l�Ƥ���0 �� �~��/400�l�Ƭ�0�B/3200�l�Ƥ���0 
		printf("%d���|�~�I\n", a);
	else
	    printf("%d���O�|�~\n", a);
	return 0;
}
