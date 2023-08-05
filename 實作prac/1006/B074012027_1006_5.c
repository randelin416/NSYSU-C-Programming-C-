#include<stdio.h>
//make two random number, use them as lond and wide and print out a stars rectangle
int main(void){
	int a, b, i, j;
    printf("ªø¡G");
    scanf("%d", &a);
    printf("¼e¡G");
    scanf("%d", &b);
    for(i=1;i<=a;i++){ //long
    	for(j=1;j<=b;j++) //wide
    	    printf(" *"); //print out a space and a star
    	printf("\n");
	}
    return 0;
}
