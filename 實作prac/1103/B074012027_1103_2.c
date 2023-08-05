#include<stdio.h>
#include<stdlib.h>
//use printf, scanf and gets, puts to input a string then output it three times.
int main(void)
{
	//printf, scanf
	char psstr[100];
	printf("請輸入一字串：");
	scanf("%s", psstr);
	printf("該字串為：%s\n", psstr);
	printf("該字串為：%s\n", psstr);
	printf("該字串為：%s\n", psstr);
	
	puts("==========================");
	
	//clear
	setbuf(stdin, NULL); 
	
	/*(clear2)
	char temp[100];
	gets(temp);
	*/
	
	//gets, puts
	char gpstr[100];
	puts("請輸入一字串：");
	gets(gpstr);
	puts("該字串為：");
	puts(gpstr);
	puts("該字串為：");
	puts(gpstr);
	puts("該字串為：");
	puts(gpstr);
	
	return 0;
}
