#include<stdio.h>
//��J�@�Ʀr�P�_��j�󵥩�Τp��7 
int main(void){
	//��J�@1~13�����
	int a;
	printf("�п�J1~13����� : ");
	scanf("%d", &a);
	//�P7��j�p
	if(a>7)
	    printf("�ӼƤj��7\n");
	else if(a<7)
	    printf("�ӼƤp��7\n");
	else
	    printf("�ӼƵ���7\n");
	return 0;
}
