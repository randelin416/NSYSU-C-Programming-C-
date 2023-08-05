#include<stdio.h>
//
int main(void){
	int a, i , j, k;
    printf("請輸入等腰三角形高度：");
    scanf("%d", &a);
    printf("\n");
    for(k=1;k<=a;k++){
    	for(i=a-k;i>0;i--){
            printf(" ");}
        for(j=1;j<=k*2-1;j++){
            printf("*");}
    printf("\n");
    }
	return 0;
}
