#include<stdio.h>
//��J99�ɧP�w��99 ��L�h�L�X���ҥ~�Ʀr 
int main(void){
	int a;
	printf("�п�J�@�ӼƦr : ");
	scanf("%d", &a);
	
	switch(a){
		//��J�Ȭ�99�� 
		case 99:
			printf("��J�F%d", a);
			break;
		//��J�Ȥ���99�� 
		default:
			printf("��J�F�ҥ~�Ʀr%d", a);
	}
	return 0;
}
