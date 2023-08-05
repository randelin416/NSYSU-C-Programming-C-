#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
struct node
{
	int data;
	struct node *next;
};
struct node *front, *rear;

void push(struct node **top, int value)
{
	struct node *neww;
	neww = malloc(sizeof(struct node));
	if((neww = malloc(sizeof(struct node))) == NULL)
		printf("Push Error!\n");
	else
	{
		neww -> data = value;
		neww -> next = NULL;
		neww -> next = *top;
		*top = neww;
	}
}

int pop(struct node **top)
{
	int value;
	struct node *temp;
	if(*top == NULL)
	{
		printf("Nothing to Pop!\n");
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

void EnQueue(int value)
{
	struct node *neww; //new¬O«O¯d¦r 
	neww = malloc(sizeof(struct node));
	neww -> data = value;
	neww -> next = NULL;
	if(front == NULL)
	{
		front = neww;
		rear = neww;
		neww -> next = neww;
	}
	else
	{
		neww -> next = front;
		rear -> next = neww;
		rear = neww;
	} 

}

/*
int DeQueue()
{
	struct node *temp;
	int value = 0;
	struct node *current;
	if(front == NULL)
	{
		printf("Front id NULL!\n");
		return -1;
	}
	else if(front == rear)
	{
		temp = front;
		value = temp -> data;
		current = rear;
		rear = front = NULL;
		return value;
	}
	else
	{
		while(current -> next != front)
			current = current -> next;
		front = current;
		front -> next = NULL;
		free(temp);
		return value;
	}
}
*/

void PrintQueue()
{
	struct node *show = front;
	while(show -> next != front)
	{
		printf("%d -> ", show -> data);
		show = show -> next;
	}
	printf("%d -> ", show -> data);
}

void PrintStack(struct node **top)
{
	struct node *temp = *top;
	//int value = temp -> data;
	//printf("%d\n", value);
	while(temp != NULL)
	{
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}

void FindWinner(struct node **top1, int a)
{
	int count = 0, num = a;
	struct node *current = front;
	struct node *previous = rear;
	while(front != rear)
	{
		num--;
		if(num == 0)
		{
			count++;
			push(top1, current -> data); //
			front = current -> next;
			rear = previous;
			rear -> next = front;
			current = current -> next;
			printf("Round %d¡G\n", count);
			PrintQueue();
			printf("\n");
			num = a;
			continue;
		}
		current = current -> next;
		previous = previous -> next;
	}
	if(front == rear)
	{
		printf("The winner is No.%d\n", front -> data);
		push(top1, front -> data);
	}
	
}

void Sort(struct node **top1, struct node **top2)
{
	int count = 0;
	int temp;
	
	while(*top1 != NULL)
	{
		temp = pop(top1);
		if(*top2 == NULL)
		{
			push(top2, temp);
		}
		else if((*top2) -> data > temp)
		{
			while(*top2 != NULL && (*top2) -> data > temp)
			{
				push(top1, pop(top2));
			}
			push(top2, temp);
		}
		else
		{
			push(top2, temp);
		}
		count++;
		
		printf("²Ä%d½ü\nunsorted stack\n", count);
		PrintStack(top1);
		printf("sorted stack\n");
		PrintStack(top2);
		printf("\n");
	}

}

int main()
{
	int a, num;
	struct node *top1 = NULL, *top2 = NULL;
	FILE *fp_r;
	fp_r = fopen("test.txt", "r");
	if(!fp_r)
		printf("Cannot Open FILE!\n");
	else
	{
		while(fscanf(fp_r, "%d", &a) > 0)
		{
			//printf("%d\n", a);
			EnQueue(a);
		}
	}
	fclose(fp_r);
	
	printf("Please enter a value for k¡G");
	scanf("%d", &num);
	
	printf("\nOriginal¡G\n");
	PrintQueue();
	printf("\n");
	FindWinner(&top1, num);	
	
	printf("\n");
	printf("unsorted stack\n");
	PrintStack(&top1);
	printf("\n");
	Sort(&top1, &top2);
	
	printf("\n");
	printf("Result¡G\n");
	PrintStack(&top2);
	
	return 0;
}
