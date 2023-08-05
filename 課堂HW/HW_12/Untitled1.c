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
	newp = (struct node *)malloc(sizeof(struct node));
	newp -> data = value;
	newp -> front = NULL;
	newp -> back = NULL;
	
	if(tail == NULL)
	{
		tail = newp;
		head = newp;
	}
	else
	{
		tail -> back = newp;
		newp -> front = tail;
		tail = newp;
	}
}

//
void InserttoHead(int value)
{
	struct node *newp;
	newp = (struct node *)malloc(sizeof(struct node));
	newp -> data = value;
	newp -> front = NULL;
	newp -> back = NULL;
	
	
	if(head == NULL)
	{
		tail = newp;
		head = newp;
	}
	else
	{
		head -> front = newp;
		newp -> back = head;
		head = newp;
	}
}

//
int DeleteTail()
{
	struct node *temp;
	int value;

	if(tail == NULL)
	{
		printf("List is Empty!\n");
		return;
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

int DeleteHead()
{
	struct node *temp;
	int value;

	if(head == NULL)
	{
		printf("List is Empty!\n");
		return;
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
		temp = head;
		value = temp -> data;
		head = head -> back;
		head -> front = NULL;
	}
	free(temp);
	return value;
}

//

void Reverse()
{
	struct node *temp = head;
	struct node *temp2;
	head = tail;
	tail = temp;

	while(temp != NULL)
	{
		temp2 = temp -> front;
		temp -> front = temp -> back;
		temp -> back = temp2;
		temp = temp -> front;
	}
}
int searchvalue(int value)
{
	struct node *temp = head;
	int location = 1;
	while((temp -> data) != value)
	{
		temp = temp -> back;
		if(temp == NULL)
		{
			printf("%d is not in the List\n",value);
			return -1;
		}
		location++;
	}
	if(location == 1)
	{
		printf("%d is at %dst node\n",value,location);
	}
	else if(location == 2)
	{
		printf("%d is at %dnd node\n",value,location);
	}
	else if(location == 3)
	{
		printf("%d is at %drd node\n",value,location);
	}
	else
	{
		printf("%d is at %dth node\n",value,location);
	}
	printf("\n");
	return location;
}

void InserttoNext(int location,int value)
{
	struct node *newp;
	newp = (struct node *)malloc(sizeof(struct node));
	newp -> data = value;
	newp -> front = NULL;
	newp -> back = NULL;
	
	
	struct node *temp = head;
	
	while(--location)
	{
		temp = temp -> back;
	}
	
	if(temp == tail)
	{
		tail -> back = newp;
		newp ->front = tail;
		tail = newp;
	}
	else
	{
		(temp -> back) -> front = newp;
		newp -> back =  temp -> back;
		newp -> front = temp;
		temp -> back = newp;
	}
}

void InserttoPrev(int location,int value)
{
	struct node *newp;
	newp = (struct node *)malloc(sizeof(struct node));
	newp -> data = value;
	newp -> front = NULL;
	newp -> back = NULL;
	
	
	struct node *temp = head;
	
	while(--location)
	{
		temp = temp -> back;
	}
	
	if(temp == head)
	{
		newp -> back = temp;
		temp ->front = newp;
		head = newp;
	}
	else
	{
		(temp -> front) -> back = newp;
		newp -> front = temp -> front;
		newp -> back = temp;
		temp ->front = newp;
	}
}

void DeleteValue(int location)
{
	struct node *temp = head;
	
	while(--location)
	{
		temp = temp -> back;
	}
	if(temp == head)
	{
		head = head -> back;
		head -> front = NULL;
	}
	else if(temp == tail)
	{
		tail = tail -> front;
		tail -> back = NULL;
	}
	else
	{
		(temp -> front) -> back = temp -> back;
		(temp -> back) -> front = temp -> front;
	}
	free(temp);
}

void DisplayList(int count)
{
	int row, times;
	struct node *temp = head;
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
				temp = temp -> back;
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

//Search
void Search(int *count)
{
	int num , choose ,value, location = 0;
	printf("Please enter the value to search¡G");
	scanf("%d", &num);
	location = searchvalue(num);
	if(location > 0)
	{
		printf("Please choose what you want to do at target node : 1.insert a value to next 2.insert a value to prev 3.delete target value 4.exit\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("Please enter the value to insert¡G");
				scanf("%d", &value);
				(*count)++;
				InserttoNext(location,value);
				DisplayList(*count);
				break;
			case 2:
				printf("Please enter the value to insert¡G");
				scanf("%d", &value);
				(*count)++;
				InserttoPrev(location,value);
				DisplayList(*count);	
				break;
			case 3:
				(*count)--;
				DeleteValue(location);
				DisplayList(*count);	
				break;
			case 4:
				return;
		}
	}
}

//

int main()
{
	int choose = 0, num,count = 0;
	
	while(choose != 7)
	{
		printf("Please choose what you want to do¡G1.insert to tail 2.insert to head 3.delete tail 4.delete head 5.reverse 6.search 7.Exit\n");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				printf("Please enter the value to add¡G");
				scanf("%d", &num);
				count++;
				InserttoTail(num);
				DisplayList(count);
				break;
			case 2:
				printf("Please enter the value to add¡G");
				scanf("%d", &num);
				count++;
				InserttoHead(num);
				DisplayList(count);	
				break;
			case 3:
				count--;
				if(count < 0)
				{
					count = 0;	
				}
				DeleteTail();
				DisplayList(count);	
				break;
			case 4:
				count--;
				if(count < 0)
				{
					count = 0;	
				}
				DeleteHead();
				DisplayList(count);	
				break;
			case 5:
				Reverse();
				DisplayList(count);	
				break;
			case 6:
				Search(&count);
				break;
			case 7:
				break;
		}
	}
	return 0;
}
