#include<stdio.h>
#include<stdlib.h>
//use printf, scanf and gets, puts to input a string then output it three times.
int main(void)
{
	//printf, scanf
	char psstr[100];
	printf("�п�J�@�r��G");
	scanf("%s", psstr);
	printf("�Ӧr�ꬰ�G%s\n", psstr);
	printf("�Ӧr�ꬰ�G%s\n", psstr);
	printf("�Ӧr�ꬰ�G%s\n", psstr);
	
	puts("==========================");
	
	//clear
	setbuf(stdin, NULL); 
	
	/*(clear2)
	char temp[100];
	gets(temp);
	*/
	
	//gets, puts
	char gpstr[100];
	puts("�п�J�@�r��G");
	gets(gpstr);
	puts("�Ӧr�ꬰ�G");
	puts(gpstr);
	puts("�Ӧr�ꬰ�G");
	puts(gpstr);
	puts("�Ӧr�ꬰ�G");
	puts(gpstr);
	
	return 0;
}
