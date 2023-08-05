#include<stdio.h>
#include<stdlib.h>
/*
a. random 10 nodes to a FILE, x, y's range between -10~10  
b. read value from the FILE, choose a sorted method to sort the y value from large to small
  (if y value are the same, sorted x value from small to large)
c. find the MAX/min of x and y and count the area of this 4 nodes 
d. print the whole picture
*/ 
int i, j, temp, temp2;
char pic[31][31]; //-15~15
struct node *top;
struct node
{
	int data; //隨要push & pop 的資料型態改變 
	struct node *ptr;
};

void push(int value)
{
	struct node *new;
	new = malloc(sizeof(struct node));
	new -> ptr = NULL;
	new -> data = value;
	new -> ptr = top;
	top = new;
}

int pop()
{
	int value;
	if(top == NULL)
	{
		printf("Nothing to Pop!\n");
		return -1;
	}
	else
	{
		struct node *temp;
		temp = top;
		value = temp -> data;
		top = top -> ptr; //要轉移top到下一個stack 
		free(temp);
		return value;
	} 
}

int empty()
{
	if(top == NULL)
		return 0;
	else
		return 1;
}

//return top data
int stack_top() //dont set the same name
{
	//need error
	if(top == NULL)
		return 0;
	else
		return top -> data;
}


//Sorting Method//
//swap func
void swap(int *a, int *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}
//Bubble Sort
void Bubble(int *a, int *b)
{
	for(j = 0; j < 20 - 1; j++)
	{
		for(i = 0; i < 20 - 1 - j; i++)
		{
			if(b[i] < b[i+1])
			{
				swap(&b[i], &b[i+1]); //using address
				swap(&a[i], &a[i+1]); //x follow y to swap
			}
			else if(b[i] == b[i+1] && a[i] > a[i+1])
			{
				swap(&a[i], &a[i+1]); 
			}
		}
	}
}

void Insert(int *a, int *b)
{
	for(j = 1; j < 20; j++)
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

void Select(int *a, int *b)
{
	for(j = 0; j < 20 - 1; j++)
	{
		int m = j;
		for(i = j + 1; i < 20; i++)
		{
			if(b[m] < b[i])
			{
				m = i;
			}
			else if(b[m] == b[i] && a[m] > a[i])
			{
				m = i;
			}
		}
		if(m != j)
		{
			swap(&b[m], &b[j]);
			swap(&a[m], &a[j]);
		}
	}
}

int Binary(int numx, int numy, int *a, int *b)
{
	int lowx, lowy, highx, highy, midx, midy;
	int checkx = 0, checky = 0;
	while(lowx < highx)
	{
		midx = (lowx + highx) / 2;
		if(a[midx] == numx)
		{
			printf("Find!\n");
			return midx;
			checkx = 1;
			break;
		}
		else if(a[midx] > numx)
			highx = midx - 1;
		else if(a[midx] < numx)
			lowx = midx + 1;
	}
	if(checkx == 0)
	{
		return -1;
	}
	while(lowy < highy)
	{
		midy = (lowy + highy) / 2;
		if(a[midy] == numy)
		{
			printf("Find!\n");
			return midy;
			checky = 1;
			break;
		}
		else if(a[midy] > numy)
			highy = midy - 1;
		else if(a[midy] < numy)
			lowy = midy + 1;
	}
	if(checky == 0)
	{
		return -1;
	}
}

void print_arr(int *a, int *b)
{
	for(i = 0; i < 20; i++)
	{
		printf("%4d%4d\n", a[i], b[i]);
	}
	printf("\n");
}

int main(void)
{
	for(i = 0; i < 20; i++)
	{
		srand(time(NULL));
		push(rand() % 20 - 10);
		int a = pop();
		printf("%d\n", a);
	}
	//作隨機20個點(x, y) 
	int coodx[20], coody[20], x[20], y[20];
	srand(5);
	for(i = 0; i < 20; i++)
	{
		coodx[i] = rand() % 20 - 10;
		coody[i] = rand() % 20 - 10;
		printf("%4d%4d\n", coodx[i], coody[i]);
	}
	
	//將點寫入檔案txt 
	FILE *fp_w;
	fp_w = fopen("practice.txt","w");
	
	if((fp_w = fopen("practice.txt","w")) == NULL)
		printf("Construct file Error! \n");
	else
	{
		//(check push pop)
		/*
		push('a');
		int x = pop();
		fprintf(fp_w, "%d", x);
		*/
		for(i = 0; i < 20; i++)
		{
			fprintf(fp_w, "%4d%4d\n", coodx[i], coody[i]);
		}	
	}
	fclose(fp_w);
	
	//讀取檔案中的資料到x, y陣列 
	FILE *fp_r;
	fp_r = fopen("practice.txt", "r");
	
	if((fopen("practice.txt", "r")) == NULL)
		printf("Open file Error!\n");
	else
	{
		for(i = 0; i < 20; i++)
		{
			fscanf(fp_r, "%d %d", &x[i], &y[i]); //remember using address
		}
	}
	fclose(fp_r);
	
	//(check success to read the data?)
	print_arr(x, y);
	
	//選擇一排序法 
	int choose;
	printf("請選擇排序法：1.泡沫排序\t2.插入排序\t3.選擇排序\t\n");
	scanf("%d", &choose);
	//選項僅在1~3內 
	while(choose < 1 || choose > 3)
	{
		printf("請選擇排序法：1.泡沫排序\t2.插入排序\t3.選擇排序\t\n");
		scanf("%d", &choose);
	}
	//switch分開狀況 
	switch(choose)
	{
		case 1:
			Bubble(x, y);
			print_arr(x, y);
			break;
		case 2:
			Insert(x, y);
			print_arr(x, y);
			break;
		case 3:
			Select(x, y);
			print_arr(x, y);
			break;
		default:
			//printf("輸入錯誤！請重新輸入！\n");
			break;
	}
	
	//找x, y最大最小值，算出矩形面積 
	//y已排序 
	int ymax = y[0];
	int ymin = y[19];
	int xmax = x[0];
	int xmin = x[0];
	for(i = 0; i < 20; i++)
	{
		if(x[i] > xmax)
		{
			xmax = x[i];
		}
		if(x[i] < xmin)
		{
			xmin = x[i];
		}
	}
	int area = (ymax - ymin) * (xmax - xmin);
	printf("X max = %d\tX min = %d\nY max = %d\t Ymin = %d\nArea = %d", xmax, xmin, ymax, ymin, area);
	
	//set the graphic
	//clear the graph
	//i for row, j for column;
	for(i = 0; i < 31; i++)
	{
		for(j = 0; j < 31; j++)
		{
			pic[i][j] = ' ';
		}
	}
	
	//x axis
	for(i = 0; i < 31; i++)
	{
		pic[15][i] = '-';
	}
	for(i = 0; i < 31; i += 5)
	{
		pic[15][i] = '|';
	}
	pic[15][30] = '>';
	
	//y axis
	for(j = 0; j < 31; j++)
	{
		pic[j][15] = '|';
	} 
	pic[30][15] = '^';
	
	//矩形水平線 
	for(i = xmin; i < xmax; i++)
	{
		pic[ymax+15][i+15] = '-';
		pic[ymin+15][i+15] = '-';
	}
	
	//矩形垂直線
	for(j = ymin; j < ymax; j++)
	{
		pic[j+15][xmax+15] = '|';
		pic[j+15][xmin+15] = '|';
	} 
	
	//畫出所有點 
	for(i = 0; i < 30; i++)
	{
		pic[x[i]+15][y[i]+15] = '*';
	}
	
	//四個對角點 
	pic[xmax+15][ymax+15] = '*';
	pic[xmin+15][ymax+15] = '*';
	pic[xmax+15][ymin+15] = '*';
	pic[xmin+15][ymin+15] = '*';
	
	//print the graphic
	for(i = 15; i >= -15; i--)
	{
		for(j = -15; j < 16; j++)
		{
			//y axis num
			if(i % 5 == 0 && j == 0)
			{
				printf("%d", i);
			}
			//-x axis number
			else if(j % 5 == -1 && i == 1)
			{
				printf("%d", j+1);
			}
			//x axis number
			else if(j % 5 == 4 && i == 1)
			{
				printf("%d", j+1);
			}
			//x axis
			else if(i == -1 && j == 14)
			{
				printf("X軸");
			}
			//y axis
			else if(j == 1 && i == -14)
			{
				printf("Y軸");
			}
			else
			{
				printf("%c", pic[i+15][j+15]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
