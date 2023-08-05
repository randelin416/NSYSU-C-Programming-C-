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
	printf("請輸入名字：");
	scanf("%s", person.name);
	printf("請輸入成績：");
	scanf("%d", &person.grade);
	printf("%s的數學成績為%d\n", person.name, person.grade);
	return 0;
} 
