#include<stdio.h>
//enter a number and print out all the even number which less than the enter number
int main(void){
    int i, a;
    printf("�п�J�@�ӼƦr(0~100)�G");
    scanf("%d", &a);
	for(i=0;i<a;i++){
		if (i%2 == 0)
		    printf("%d�O����\n",i);
	}
    return 0;
}
