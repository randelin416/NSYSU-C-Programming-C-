#include<stdio.h>
//�ھڿ�J��0~100���ƿ�J���w�϶��r�� 
int main(void){
	//��L��J�@��� 
	int a;
	printf("�п�J�@�Ӿ�Ʀr(0~100) : ");
	scanf("%d", &a);
	//�P�O�Ʀr�϶� 
	if(a<34 && a>=0) 
	    printf("���B��\n");
	else if(a<101 && a>33)
	    printf("���B��\n");
	else if(a>32 && a<73)
	    printf("GG�F\n");
	else
	    printf("��J���Ʀr���A�d�򤺡A�Э��s��J");
	return 0;
}
