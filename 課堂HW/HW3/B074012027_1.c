#include<stdio.h>
//�P�_��J���y�Ц����@�H�� 
//��0�L�X�ɬ���ƧΦ� 
int main(void){
	//��L��Jx�By�y�Э� 
	float a, b;
	printf("Please enter x coordinate : ");
	scanf("%f", &a);
	printf("Please enter y coordinate : ");
	scanf("%f", &b);
	//�P�_x�By�y�ЭȤ����t�H�D�y�Ц����ӶH��
	if(a>0){
	    if(b>0)
	        printf("point (%f,%f) is in the first quadrant.\n", a, b);
	    else if(b<0)
	        printf("point (%f,%f) is in the forth quadrant.\n", a, b);
	    else
	        printf("point (%f,%d) is not in any quadrant.\n", a, b); // y�y�Э�=0����b����H���W
	} 
	else if(a<0){
	    if(b>0)
	        printf("point (%f,%f) is in the second quadrant.\n", a, b);
	    else if(b<0)
	        printf("point (%f,%f) is in the third quadrant.\n", a, b);
	    else
	        printf("point (%f,%d) is not in any quadrant.\n", a, b); // y�y�Э�=0����b����H���W
	}
	//x�y�Э� = 0�ɤ���b����H���W
	else{
        if(b>0 || b<0)
	        printf("point (%d,%f) is not in any quadrant.\n", a, b);
	    else
	        printf("point (%d,%d) is not in any quadrant.\n", a, b); //���I����b����H���W 
    }
	return 0;
}
