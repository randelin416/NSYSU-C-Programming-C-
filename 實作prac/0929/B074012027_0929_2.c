#include<stdio.h>
//�N��J������ର����ȦL�X 
int main(void){
	//����L��J�@���
	int a;
	printf("�п�J�@��� : ");
	scanf("%d", &a);
	//�P�_��J�Ȥ����t
	if(a>=0)
	    printf("����Ȭ� : %d\n", a);
	if(a<0)
	    printf("����Ȭ� : %d\n", -a);
	return 0;
}
