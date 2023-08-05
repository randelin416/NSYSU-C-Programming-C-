#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//infix to postfix(reverse polish notation)
struct node *top;
struct node
{
	int data;
	struct node *ptr;
};

//push fuction
void push(int value)
{
	struct node *new;
	new = malloc(sizeof(struct node));
	if((new = malloc(sizeof(struct node))) == NULL)
		printf("Push Error!\n");
	else
	{
		new -> data = value;
		new -> ptr = NULL;
		new -> ptr = top;
		top = new;
	}
}

//pop function
char pop()
{
	int value;
	if(top == NULL)
	{
		printf("Pop Error!\n");
		return 0;
	}
	else
	{
		struct node *temp;
		temp = top;
		value = temp -> data;
		top = top -> ptr;
		free(temp);
		return value;
	}
}

//Is stack empty?
int empty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}

//return the top of the stack
char stack_top()
{
	if(top == NULL)
		return 0;
	else
		return top -> data;
}

//priority idetified
int priority(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		default:
			return 0;
	}
}

//infix to postfix func
void Postfix(char *infix, char *postfix)
{
	int i, j = 0;
	char ele;
	for(i = 0; i < (int)strlen(infix); i++)
	{
		ele = infix[i];
		switch(ele)
		{
			case '(':
				push(ele);
				break;
			case ')':
				while(!empty() && (ele = pop()) != '(')
					postfix[j++] = ele;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				while(priority(stack_top()) >= priority(ele))
					postfix[j++] = pop();
				push(ele);
				break;
			default:
				postfix[j++] = ele;	
		}
	}
	while(!empty())
		postfix[j++] = pop();
	postfix[j++] = '\0'; 
}

int main(void)
{
	//(check push &pop func)
	/*
	push('y');
	int a = pop();
	printf("%c", a);
	*/

	char infix[100], postfix[100];
	scanf("%s", infix);
	//printf("%s", infix);
	Postfix(infix, postfix);
	printf("中序運算式：%s\n後序運算式：%s\n", infix, postfix);
	
	//scanf("");
	return 0;
}
