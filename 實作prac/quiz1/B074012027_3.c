#include<stdio.h>
//�N�j�g�r���ഫ���p�g 
int main(void) {
	char c;
	printf("�п�J�@�Ӥj�g�r�� : ");
	scanf("%c", &c);
	c = c - 'A' + 'a'; //�ϥ�ASCII�X�N�j�g�ഫ���p�g 
	printf("�A��J���r���p�g�O%c\n", c);
	return 0;
}
