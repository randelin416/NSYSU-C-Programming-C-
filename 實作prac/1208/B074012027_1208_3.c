#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//input three student's name and grade to structure
int main()
{
	struct data
	{
		char name[10];
		int grade;
	};
	
	struct data a, b, c;
	
	printf("�п�J�Ĥ@��W�r�P���Z(�H�ťչj�})�G");
	scanf("%s %d", a.name, &a.grade);
	
	printf("�п�J�ĤG��W�r�P���Z(�H�ťչj�})�G");
	scanf("%s %d", b.name, &b.grade);
	
	printf("�п�J�ĤT��W�r�P���Z(�H�ťչj�})�G");
	scanf("%s %d", c.name, &c.grade);
	
	printf("\n%s���ƾǦ��Z��%d\n%s���ƾǦ��Z��%d\n%s���ƾǦ��Z��%d\n", a.name, a.grade, b.name, b.grade, c.name, c.grade);
	return 0;
} 
