#include<stdio.h>
//
int main(void){
	printf("");
    int a, r = 0;
    int x = 1, y = 99;
	srand(time(NULL));
	r = rand() % 100 + 1; //set a  ranndom number
	while(a != r){ //looping until the number is correct
		printf("請輸入猜測，範圍%d~%d：", x, y);
        scanf("%d", &a);
        if(r>=x && r<=a){ //縮小範圍在1~a 
            x = x; y = a; }
        else if(r>=a && r<=y){ //縮小範圍在a~99
            x = a; y= y;}
	} 
	printf("恭喜猜對了！\n");
	return 0;
}
