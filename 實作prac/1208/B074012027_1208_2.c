#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct a data with input name and math grade

int main()
{
	struct data
	{
		char name[10];
		int grade;
	};
	struct data person;
	printf("�п�J�W�r�G");
	scanf("%s", person.name);
	printf("�п�J���Z�G");
	scanf("%d", &person.grade);
	printf("%s���ƾǦ��Z��%d\n", person.name, person.grade);
	return 0;
} 
