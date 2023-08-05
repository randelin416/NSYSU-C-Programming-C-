#include<stdio.h>
#include<stdlib.h>
//
struct node
{
	int data;
	struct node *ptr;
};
struct node *top;

void push(int value)
{
	struct node *new;
	new = malloc(sizeof(struct node));
	if((new = malloc(sizeof(struct node))) == NULL)
		printf("Error!\n");
	else
	{
		new -> data = value;
		new -> ptr = NULL;
		new -> ptr = top;
		top = new;
	}	
}

int pop(struct node *top;)
{
	int value;
	if(top == NULL)
		printf("Nothing to pop!\n");
	else
	{
		struct node *temp;
		temp = top;
		value = temp -> data;;
		top = top -> ptr;
		free(temp);
		return value;
	}
}

int main()
{
	int a;
	//printf("%d", top -> data);
	push(3);
	printf("%d", top -> data);
	push(5);
	printf("%d", top -> data);
	a = pop(top);
	printf("%d", a);
	printf("%d", top -> data);
	//pop(top);
	printf("%d", top -> data);
	
}
