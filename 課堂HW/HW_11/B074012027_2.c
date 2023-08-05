#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//

struct node
{
	int data;
	struct node *next;	
};

void DisplayStack(struct node **front1, struct node **rear1, int count) 
{
	int row, times;
	struct node *temp = (*front1);
	if(temp == NULL)
	{
		printf("Stack is Empty!\n");
		return; //¸õ¥X¨ç¦¡ 
	}
	
		//printf("%d -> ", temp -> data);
	for(row = 0; row < 7; row++)
	{
		printf("*");
		if(row == 0 || row == 6)
		{
			for(times = 0; times < count; times++)
			{
				printf("*******");
			}
		}
		else if(row == 3)
		{
			while(temp != NULL)
			{
				printf("  %d   *", temp -> data);
				temp = temp -> next;
			}
		}
		else
		{
			for(times = 0; times < count; times++)
			{
				printf("      *");
			}
		}
		printf("\n");
	}	
}

//Queue funcs
void EnQueue(struct node **front, struct node **rear, int value)
{
	struct node *newp;
	newp = (struct node*)malloc(sizeof(struct node));
	newp -> data = value;
	newp -> next = NULL;
	if((*front) == NULL)
	{
		(*front) = newp;
		(*rear) = newp;
	}
	else
	{
		(*rear)->next = newp;
		(*rear) = newp;
	}
}

int DeQueue(struct node **front, struct node **rear)
{
	struct node *temp;
	int value = 0;
	if((*front) == NULL)
	{
		printf("DeQueue Error!\n");
		return -1;
	}
	else if((*front) == (*rear))
	{
		temp = (*front);
		value = temp -> data;
		(*rear) = (*front) = NULL;
	}
	else
	{
		value = (*front) -> data;
		(*front) = (*front) -> next;
	}
	return value;
}

/*
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
*/
  
void Push(struct node **front1, struct node **rear1, struct node **front2, struct node **rear2, int value)
{
	EnQueue(front2, rear2, value);
	if((*front1) == NULL && (*rear1) == NULL)
	{
		//printf("haha\n");
		(*front1) = (*front2);
		(*front2) = NULL;
		(*rear1) = (*rear2);
		(*rear2) = NULL;
	}
	else
	{
		while((*front1) != NULL)
		{
			printf("hehe\n");
			EnQueue(front2, rear2, DeQueue(front1, rear1));
			//printf("front1 = %d rear1 = %d==*\n", (*front1)->data , (*rear1)-> data);
			//printf("front2 = %d rear2 = %d==*\n", (*front2)->data , (*rear2)-> data);
			
		}
		/*
		(*front1) = NULL;
		if((*front1) == NULL)
			printf("hehe\n");
		*/
		(*front1) = (*front2);
		(*front2) = NULL;
		(*rear1) = (*rear2);
		(*rear2) = NULL;
	}
}

void Pop(struct node **front1, struct node **rear1)
{
	DeQueue(front1, rear1);
}

int main()
{
	struct node *front1 = NULL, *front2 = NULL, *rear1 = NULL, *rear2 = NULL;
	int choose = 0, count = 0;
	while(choose != 3)
	{
		printf("Please choose what you want to do¡G1.Push 2.Pop 3. Exit\n");
		scanf("%d", &choose);
		switch(choose)
		{
			int num;
			case 1: //enqueue
				printf("Please enter the value of to enqueue¡G");
				scanf("%d", &num);
				Push(&front1, &rear1, &front2, &rear2, num);
				count++;
				break;
			case 2: //dequeue
				Pop(&front1, &rear1);
				count--;
				if(count == -1)
					count = 0;
				break;
			case 3: //exit
				break;
		}
		DisplayStack(&front1, &rear1, count);
	}
	return 0;
 } 
