#include<stdio.h>
//�̫��w�榡�C�L�X��J���ƭ� 
int main(void) {
	float a;
	printf("�п�J�@�Ӽ� : ");
	scanf("%f", &a);
	printf("%10.1f\n", a);
	printf("%010.2f\n", a);
	printf("%+10.4f\n", a);
	printf("%.3f\n", a);    //���p���I��T�� 
	return 0;
}
