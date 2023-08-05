#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//midterm2
int i, j, temp, temp2;
int xmin, xmax, ymin, ymax, area;
char pic[111][111];
char pic2[111][111];

union arr
{
	int x;
	int y;
};

struct node *top;
struct node
{
	int datax;
	int datay;
	struct node *ptr;
};

//push func
void push(int *a, int *b)
{
	struct node *new;
	new = malloc(sizeof(struct node));
	new -> datax = *a;
	new -> datay = *b;
	new -> ptr = NULL;
	new -> ptr = top;
	top = new;
}

//pop func
int pop()
{
	int valuex, valuey;
	if(top == NULL)
		printf("Nothing to Pop!\n");
	else
	{
		struct node *temp;
		temp = top;
		valuex = top -> datax;
		valuey = top -> datay;
		top = top -> ptr;
		free(temp);
		//printf("%4d%4d\n", valuex, valuey);
		return valuey;
	}
}

//swap func
void swap(int *a, int *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}

//sorted by insertion
void Insert(int *a, int *b)
{
	for(j = 1; j < 101; j++)
	{
		temp = a[j];
		temp2 = b[j];
		for(i = j - 1; i >= 0; i--)
		{
			if(b[i] < temp2)
			{
				b[i+1] = b[i];	
				a[i+1] = a[i];
			}
			else if(b[i] == temp2 && a[i] > temp)
			{
				a[i+1] = a[i];
				b[i+1] = b[i];
			}
			else
				break;
		}
		a[i+1] = temp;
		b[i+1] = temp2;
	}
}

/*
void print_stack()
{
	int valuex = top -> datax;
	int valuey = top -> datay;
	printf("")
}
*/

int find_max(int *a)
{
	int max = a[0];
	for(i = 0; i <100; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

int find_min(int *a)
{
	int min = a[0];
	for(i = 0; i <100; i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

int main(void)
{
	int arr[101], arrx[101], arry[101];
	
	srand(1);
	for(i = 0; i <101; i++)
	{
		arrx[i] = rand() % 101 - 50;
		arry[i] = rand() % 101 - 50;
		push(&arrx[i], &arry[i]);
	}
	
	
	for(i = 0; i <101; i++)
	{
		pop();
	}
	printf("\n\n");
	
	printf("\n\n");
	
	//sorted & push into the stack;
	Insert(arrx, arry);
	for(i = 0; i <101; i++)
	{
		push(&arrx[i], &arry[i]);
	}
	
	//(check)
	/*
	for(i = 0; i <101; i++)
	{
		printf("%4d%4d\n", arrx[i], arry[i]);
	}
	*/
	
	//find the max & min
	xmax = find_max(arrx);
	xmin = find_min(arrx);
	ymax = find_max(arry);
	ymin = find_min(arry);
	area = (ymax - ymin) * (xmax - xmin);
	printf("Xmin = %d, Xmax = %d, Ymin = %d, Ymax = %d\nThe area of rectangle = %d", xmin, xmax, ymin, ymax, area);
	
	//set the graph//
	//clear
	for(i = 0; i < 111; i++)
	{
		for(j = 0; j < 111; j++)
		{
			pic[i][j] = ' ';
		}
	}
	
	//x axis
	for(j = 0; j < 111; j++)
	{
		pic[55][j] = '-';
	}
	for(j = 5; j < 111; j += 10)
	{
		pic[55][j] = '|';
	}
	pic[55][110] = '>';
	
	//y axis
	for(i = 0; i < 111; i++)
	{
		pic[i][55] = '|';
	}
	pic[110][55] = '^';
//-------------------------------------------//
	//矩形水平線
	for(j = xmin; j < xmax; j++)
	{
		pic[ymin+55][j+55] = '-';
		pic[ymax+55][j+55] = '-';
	}
	
	//矩形垂直線
	for(i = ymin; i <= ymax; i++)
	{
		pic[i+55][xmin+55] = '|';
		pic[i+55][xmax+55] = '|';
	}

//-------------------------------------------//

	//print the graph//
	printf("\n");
	for(i = 55; i > -56; i--)
	{
		for(j = -55; j < 56; j++)
		{
			//y numbers
			if(i % 10 == 0 && j == 0)
			{
				printf("%d", i);
				if(i <= -10)
					j += 2;
				if(i >= 10)
					j++;
			}
			//+x numbers
			else if(j % 10 == -1 && i == 1)
			{
				printf("%d", j+1);
				if(j <= -10)
					j += 2;
			}
			//-x numbers
			else if(j % 10 == 9 && i == 1)
			{
				printf("%d", j+1);
				if(j >= 10)
					j++;
			}
			//x axis name
			else if(i == -1 && j == 51)
				printf("X軸");
			//y axis name
			else if(i == -55 && j == 3)
				printf("Y軸");
			//remain
			else
				printf("%c", pic[i+55][j+55]);
		}
		printf("\n");
	}
	

//set the second graph//
	//clear
	for(i = 0; i < 111; i++)
	{
		for(j = 0; j < 111; j++)
		{
			pic2[i][j] = ' ';
		}
	}
	
	//x axis
	for(j = 0; j < 111; j++)
	{
		pic2[55][j] = '-';
	}
	for(j = 5; j < 111; j += 10)
	{
		pic2[55][j] = '|';
	}
	pic2[55][110] = '>';
	
	//y axis
	for(i = 0; i < 111; i++)
	{
		pic2[i][55] = '|';
	}
	pic2[110][55] = '^';
//-------------------------------------------//
	//所有點 
	for(i = 0; i < 101; i++)
	{
		pic2[arrx[i]+54][arry[i]+56] = '*';
	}
	
	//最大最小四個點 
	pic2[xmax+55][ymax+55] = '*';
	pic2[xmin+54][ymax+54] = '*';
	pic2[xmax+55][ymin+56] = '*';
	pic2[xmin+54][ymin+56] = '*';
//-------------------------------------------//
//print the second graph//
	printf("\n\n");
	for(i = 55; i > -56; i--)
	{
		for(j = -55; j < 56; j++)
		{
			//y numbers
			if(i % 10 == 0 && j == 0)
			{
				printf("%d", i);
				if(i <= -10)
					j += 2;
				if(i >= 10)
					j++;
			}
			//+x numbers
			else if(j % 10 == -1 && i == 1)
			{
				printf("%d", j+1);
				if(j <= -10)
					j += 2;
			}
			//-x numbers
			else if(j % 10 == 9 && i == 1)
			{
				printf("%d", j+1);
				if(j >= 10)
					j++;
			}
			//x axis name
			else if(i == -1 && j == 51)
				printf("X軸");
			//y axis name
			else if(i == -55 && j == 3)
				printf("Y軸");
			//remain
			else
				printf("%c", pic2[i+55][j+55]);
		}
		printf("\n");
	}
	
	return 0;
}
