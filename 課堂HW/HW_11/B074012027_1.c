#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
struct node
{
	int data;
	struct node *next;	
};

void DisplayQueue(struct node **top1, int count) 
{
	int row, times;
	struct node *temp = *top1;
	if(temp == NULL)
	{
		printf("Queue is Empty!\n");
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
		
	
	printf("\n"); 
}

//Stack func
void Push(struct node **top, int value)
{
	struct node *newp;
	if((newp = malloc(sizeof(struct node))) == NULL)
	{
		printf("Push Error!\n");	
	}
	else
	{
		newp -> data = value;
		newp -> next = NULL;
		newp -> next = *top;
		*top = newp;	
	}
}

int Pop(struct node **top)
{
	int value;
	struct node *temp;
	if((*top) == NULL)
	{
		//printf("Nothing to Pop!\n");
		return -1;
	}
	else
	{
		temp = *top;
		value = temp -> data;
		*top = (*top) -> next;
		free(temp);
		return value;
	}
}

void EnQueue(struct node **top1, struct node **top2, int value)
{
	if((*top1) == NULL)
	{
		//printf("haha\n");
		Push(top1, value);
	}
	else
	{
		while((*top1)!= NULL)
		{
			Push(top2, Pop(top1));
		}
		Push(top1, value);
		while((*top2) != NULL)
		{
			Push(top1, Pop(top2));
		}
	}
}

void DeQueue(struct node **top1)
{
	Pop(top1);
}

int main()
{
	struct node *top1 = NULL, *top2 = NULL;
	int choose = 0, count = 0;
	while(choose != 3)
	{
		printf("Please choose what you want to do¡G1.Enqueue 2.Dequeue 3. Exit\n");
		scanf("%d", &choose);
		switch(choose)
		{
			int num;
			case 1: //enqueue
				printf("Please enter the value of to enqueue¡G");
				scanf("%d", &num);
				EnQueue(&top1, &top2, num);
				count++;
				break;
			case 2: //dequeue
				DeQueue(&top1);
				count--;
				if(count == -1)
					count = 0;
				break;
			case 3: //exit
				break;
		}
		DisplayQueue(&top1, count);
	}
	return 0;
 } 
