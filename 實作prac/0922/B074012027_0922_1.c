#include<stdio.h>
#include <math.h> //�]���ϥ�pow��ƻݭn�����Y�� 
#define PI 3.14159265358
//�p��y����n�ä����Hfloat�Pdouble�Φ��x�s���t�O 
int main(void) {
	int r;
	printf("�п�J�b�|����(���) : ");
	scanf("%d", &r);
	float vf = pow(r, 3)*PI*4/3;   //�Hfloat�Φ��x�s  //�ϥ�pow��ƭp��r���T���� 
	double vd = pow(r, 3)*PI*4/3;  //�Hdouble�Φ��x�s  //�ϥ�pow��ƭp��r���T���� 
	printf("\n��nf : %.12f\n", vf);
	printf("��nd : %.12lf\n", vd);
	return 0;
}
