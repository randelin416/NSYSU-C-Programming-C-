#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//initialize a structure by pointer function
struct mystruct
{
	char name[10];
	int age;
	int money;
	int debt;
};

void initialize(struct mystruct *ptr)
{
	printf("½Ð¿é¤J¦W¦r¡G"); 
	scanf("%s", ptr -> name); 
	srand(time(NULL));
	ptr -> age = rand() % 51 + 10;
	ptr -> money = rand() % 150001 + 150000;
	ptr -> debt = rand() % 50001 + 50000;
	printf("name = %s\nage = %d\nmoney = %d\ndebt = %d\n", ptr -> name, ptr -> age, ptr -> money, ptr -> debt);
}

int main()
{
	struct mystruct a;
	initialize(&a);
	
	return 0;
} 
