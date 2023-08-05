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
	
	printf("請輸入第一位名字與成績(以空白隔開)：");
	scanf("%s %d", a.name, &a.grade);
	
	printf("請輸入第二位名字與成績(以空白隔開)：");
	scanf("%s %d", b.name, &b.grade);
	
	printf("請輸入第三位名字與成績(以空白隔開)：");
	scanf("%s %d", c.name, &c.grade);
	
	printf("\n%s的數學成績為%d\n%s的數學成績為%d\n%s的數學成績為%d\n", a.name, a.grade, b.name, b.grade, c.name, c.grade);
	return 0;
} 
