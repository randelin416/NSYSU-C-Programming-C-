#include<stdio.h>
//��J�@�Ʀr�@�r���æP�ɦC�L��� 
int main(void) {
	int a;
	char c;
	printf("�п�J�@�ӼƦr : ");
	scanf("%d", &a);
	printf("\n�п�J�@�Ӧr�� : ");
	fflush(stdin); //�M���w�İϸ�� �_�h����LF�ʧ@�|�Q��10�椧scanfŪ�� 
	scanf("%c", &c);
	printf("\n�ڦ� %d �� %c ", a, c); //�@�˶����Xa�Pc�~�|�C�L�� 
	return 0;
}
