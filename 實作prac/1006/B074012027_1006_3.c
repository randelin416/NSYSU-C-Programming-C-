#include<stdio.h>
//print out stars with the enter number lines and each line add one star
int main(void){
	int a, i, j;
	printf("�п�J�@�ӼƦr(1~100)�G");
	scanf("%d", &a);
    for(i=1;i<=a;i++){
    	for(j=1;j<=i;j++){
    		printf("*");
		}
		printf("\n");
	}
    return 0;
}
