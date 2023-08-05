#include<stdio.h>
#include<stdlib.h>

/*
int i, j, size, a[10];
void Bubble()
{
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - 1 - i;j++)
		{
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}

void Insertion()
{
	for(i = 1; i < size; i++)
	{
		int temp = a[i];
		for(j = i - 1; j >= 0; i--)
		{
			if(a[j] > temp)
				a[j+1] = a[j];
			else
				break; 
		}
		a[j+1] = temp;
	}
}

void Selection()
{
	for(i = 0; i < size - 1; i++)
	{
		int min = i;
		for(j = i + 1; j < size; j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		if(min != i)
		{
			swap(a[min], a[i]);
		}
	}
}
*/
struct node
{
	int data;
	struct node *next;
	struct node *child;
};

struct node *newnode(int data)
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = data;
	newnode -> next = NULL;
	newnode -> child = NULL;
	return newnode;
}
struct node *addsib(struct node *node, int data)
{
	if(node == NULL)
		return NULL;
	while(node -> next)
		node = node -> next;
	return (node -> next = newnode(data));
}
struct node *addchild(struct node *node, int data)
{
	if(node == NULL)
		return NULL;
	if(node -> child)
		return addsib(node -> child, data);
	else
		return (node -> next = newnode(data));
}
void traversetree(struct node *root)
{
	if(root == NULL)
		return;
	while(root)
	{
		printf("%d", root -> data);
		if(root -> child)
			traversetree(root -> child);
		root = root -> next;
	}
}
int main()
{
	struct node *root = newnode(5);
	struct node *n1 = addchild(root, 2);
	struct node *n2 = addsib(n1, 4);
	struct node *n3 = addchild(n2, 7);
	traversetree(root);
	return 0;
}


