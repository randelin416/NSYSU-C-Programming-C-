#include<stdio.h>
#include<stdlib.h>

//binary load func
void Binary_load(FILE *file_ptr, int **array)
{
	int i, j;
	for(i = 0; i < 32; i++)
	{
		for(j = 0; j < 32; j++)
		{
			fscanf(file_ptr, "%d", &array[i][j]);
		}
	}
}

//print func
void print(int **array)
{
	int i, j;
	for(i = 0; i < 32; i++)
	{
		for(j = 0; j < 32; j++)
		{
			printf("%2d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//min of forward
int min_4(int w, int nw, int n, int ne)
{
	int min = w;
	if(nw < min)
		min = nw;
	if(n < min)
		min = n;
	if(ne < min)
		min = ne;
	return min;
}

//forward pass func
void forward(int **array)
{
	int i, j;
	int w, nw, n, ne;
	for(i = 1; i < 31; i++)
	{
		for(j = 1; j < 31; j++)
		{
			if(array[i][j] == 1)
			{
				w = array[i][j-1];
				nw = array[i-1][j-1];
				n = array[i-1][j];
				ne = array[i-1][j+1];
				array[i][j] = min_4(w, nw, n, ne) + 1;
			}
			
		}
	}
}

//min of backward
int min_5(int arr, int e, int se, int s, int sw)
{
	int min = arr;
	if(e < min)
		min = e;
	if(se < min)
		min = se;
	if(s < min)
		min = s;
	if(sw < min)
		min = sw;
	return min;
}

//backward pass func
void backward(int **array)
{
	int i, j;
	int arr, e, se, s, sw;
	for(i = 30; i > 0; i--)
	{
		for(j = 30; j > 0; j--)
		{
			if(array[i][j] != 0)
			{
				arr = array[i][j];
				e = array[i][j+1] + 1;
				se = array[i+1][j+1] + 1;
				s = array[i+1][j] + 1;
				sw = array[i+1][j-1] + 1;
				array[i][j] = min_5(arr, e, se, s, sw);
			}	
		}
	}
}

//writing the result of the backward pass to result.txt
void print_result(FILE *file_ptr, int **array)
{
	int i, j;
	for(i = 0; i < 32; i++)
	{
		for(j = 0; j < 32; j++)
		{
			fprintf(file_ptr, "%2d", array[i][j]);
		}
		fprintf(file_ptr, "\n");
	}
}

//pixel value func
void pixel_value(int x, int y, int **array)
{
	while(1)
	{
		char select;
		int x_value, y_value, value;
		fflush(stdin);
		printf("請問是否要查詢pixel值？(Y/ N)\n");
		scanf("%c", &select);
		if(select == 'Y')
		{
			printf("請輸入要查詢的座標：\nx = ");
			scanf("%d", &x_value);
			printf("y = ");
			scanf("%d", &y_value);
			value = array[x_value][y_value];
			printf("pixel value：%d", value);
			printf("\n\n");
		}
		else
			break;
	}
}

int main(void)
{
	//read file binary image
	FILE *fp_r;
	fp_r = fopen("BinaryImage.txt", "r");
	
	//check file error
	if((fp_r = fopen("BinaryImage.txt", "r")) == NULL)
		printf("BinaryImage.txt Files Error.");
	else
	{
		int i, j;
		int arr[32][32];
		int *p[32];
		
		//set pointer array p related to array arr 
		for(i = 0 ; i < 32 ; i++)
		{
			p[i] = arr[i];
		}
		
		Binary_load(fp_r, p);
		printf("Binary Image：\n");
		print(p);
		
		forward(p);
		printf("Forward Pass：\n");
		print(p);
		
		backward(p);
		printf("Backward Pass：\n");
		print(p);
		
		//make file result.txt
		FILE *fp_w;
		fp_w = fopen("Result.txt", "w");
		
		//check file error
		if((fp_w = fopen("Result.txt", "w")) == NULL)
			printf("Result.txt Files Error.");
		else
		{
			print_result(fp_w, p);
		}
		fclose(fp_w);
		
		//pixel value
		int x_value, y_value, value;
		pixel_value(x_value, y_value, p);
	}
	fclose(fp_r);
	return 0;
}
