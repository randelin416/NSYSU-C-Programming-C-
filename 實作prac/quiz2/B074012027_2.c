#include<stdio.h>
//
int main(void){
	printf("");
    int a, r = 0;
    int x = 1, y = 99;
	srand(time(NULL));
	r = rand() % 100 + 1; //set a  ranndom number
	while(a != r){ //looping until the number is correct
		printf("�п�J�q���A�d��%d~%d�G", x, y);
        scanf("%d", &a);
        if(r>=x && r<=a){ //�Y�p�d��b1~a 
            x = x; y = a; }
        else if(r>=a && r<=y){ //�Y�p�d��ba~99
            x = a; y= y;}
	} 
	printf("���߲q��F�I\n");
	return 0;
}
