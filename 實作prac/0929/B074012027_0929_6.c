#include<stdio.h>
//��JADUQ���j�p�g�r������ܤ��P�\�� �H�~�h��ܿ��~ 
int main(void){
	char a;
	printf("�п�J�@�Ӧr�� : ");
	scanf("%c", &a);
	
	switch(a){
		case 'A':
		case 'a':
			printf("�i�J�s�W\n");
			break;
		case 'D':
		case 'd':
			printf("�i�J�R��\n");
			break;
		case 'U':
		case 'u':
			printf("�i�J�ק�\n");
			break;
		case 'Q':
		case 'q':
			printf("���}�t��\n");
			break;
		default:
			printf("�S���o�ӿﶵ�I\n");
	}
	return 0;
}
