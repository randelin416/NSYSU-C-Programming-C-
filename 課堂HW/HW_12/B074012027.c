#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
//
struct node
{
	int data;
	struct node *front;
	struct node *back;
};
struct node *head, *tail;

//
void InserttoTail(int value)
{
	struct node *newp;
	newp = malloc(sizeof(struct node));
	newp -> data = value;
	if(tail == NULL)
	{
		tail == newp;
		head == newp;
	}
	newp -> front = tail;
	newp -> back = NULL;
	tail -> back = newp;
	tail = newp;
}

//
void InserttoHead(int value)
{
	struct node *newp;
	newp = malloc(sizeof(struct node));
	newp -> data = value;
	if(head == NULL)
	{
		tail == newp;
		head == newp;
	}
	newp -> front = NULL;
	newp -> back = head;
	head -> front = newp;
	head = newp;
}

//
void DeleteTail()
{
	struct node *temp;
	int value;
	struct node *current;
	if(tail == NULL)
	{
		printf("List is Empty!\n");
	}
	else if(head == tail)
	{
		temp = tail;
		value = temp -> data;
		head = NULL;
		tail = NULL;
	}
	else
	{
		temp = tail;
		value = temp -> data;
		tail = tail -> front;
		tail -> back = NULL;
	}
	free(temp);
	return value;
}

//
void DeleteHead()
{
	struct node *temp;
	int value;
	struct node *current;
	if(head == NULL)
	{
		printf("List is Empty!\n");
	}
	else if(head == tail)
	{
		temp = head;
		value = temp -> data;
		head = NULL;
		tail = NULL;
	}
	else
	{
		temp = head;
		value = temp -> data;
		head = head -> back;
		head -> back = NULL;
	}
	free(temp);
	return value;
}

void Reverse()
{
	struct node *temp, *temp2;
	temp = head;
	head = tail;
	tail = temp;
	while(temp != NULL)
	{
		temp2 = temp -> back;
		temp -> back = temp -> front;
		temp -> front = temp2;
		temp = temp -> back; //////////////////////////////////
	}
}


//Search
void Search()
{
	int num, count = 1;
	printf("Please enter the value to search¡G");
	scanf("%d", &num);
	struct node *current = head;
	while((current <> NULL) && (current -> data != num))
	{
		current = current -> tail;
		count++;
	}
	
/*
	while(choose2 != 4)
	{
		printf("Please choose what you want to do at target node¡G1.insert a value to next 2.insert a value to prev 3.delete target value 4.exit\n");
		scanf("%d", &choose2);
		switch
	}
*/
	
	return count;
}

//
void DisplayList(int count) 
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

int main()
{
	int choose = 0, num, choose2 = 0, num2;
	while(choose != 7)
	{
		printf("Please choose what you want to do¡G1.insert to tail 2.insert to head 3.delete tail 4.delete head 5.reverse 6.search 7.Exit\n");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				printf("Please enter the value to add¡G");
				scanf("%d", &num);
				InserttoTail(num);
				DisplayList(count);
				break;
			case 2:
				printf("Please enter the value to add¡G");
				scanf("%d", &num);
				InserttoHead(num);
				DisplayList(count);	
				break;
			case 3:
				DeleteTail();
				DisplayList(count);	
				break;
			case 4:
				DeleteHead();
				DisplayList(count);	
				break;
			case 5:
				Reverse();
				DisplayList(count);	
				break;
			case 6:
				Search();
				break;
			case 7:
				break;
		}
	}
	
	return 0;
}
