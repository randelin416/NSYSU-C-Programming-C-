#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//for loop make some random numbers and print out the sum of the numbers
int main(void){
	int i, a, r, sum = 0; //sum�]�w��0 i,a,r�ä��v�T�᭱���p 
	printf("�п�J�@�ӼƦr(1~100)�G");
	scanf("%d", &a);
	srand(time(NULL));
    for(i=1;i<=a;i++){
    	r = rand() % 500 + 1; //set a  ranndom number
    	printf("��%3d���H���ƬO%3d\n", i, r);
    	sum += r;
	}
	printf("�`�X��%d", sum);
    return 0;
}
