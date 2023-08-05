#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float RELU(float x)
{
	float y = x;
	if(y < 0)
		return 0;
	else
		return y;
}

int main()
{

	int Matrix[16][16];
	int Bias[14][14];
	float Kernel[9];
	float Convolution[14][14];
	float Result[14][14];
	
	FILE *Matrix_w;
	FILE *Bias_w;
	FILE *Conv_w;
	FILE *Result_w;
	FILE *Kernel_r;
	
	Matrix_w = fopen("Matrix.txt","w");
	Bias_w = fopen("Bias.txt","w");
	Conv_w = fopen("Conv.txt","w");
	Result_w = fopen("Result.txt","w");
	Kernel_r = fopen("Kernel.txt","r");
	
	
	
	srand(5);//設定一樣的亂數種子 
	
	int i, j, k;
	for(i = 0; i < 16;i++)//亂數產生Matrix 
	{
		for(j = 0 ; j < 16 ; j++)
		{
			
			Matrix[i][j] = (rand()%20) - 10;
		}
	}
	
	for(i = 0; i < 14;i++)//建立Bias及初始化Convolution,Result 
	{
		for(j = 0 ; j < 14 ; j++)
		{
			
			Bias[i][j] = 1;
			//先預設 
			Convolution[i][j] = 0;
			Result[i][j] = 0;
		}
	}
	
	for(i = 0 ; i < 9 ; i++)//讀取Kernel值 
	{	
		//fscanf(從指標所指到的檔案位置開始讀取，"讀取的資料型態"，放到需要的陣列 
		fscanf(Kernel_r,"%f",&Kernel[i]); //&?? 
	}

	
	//剩下這邊了，計算卷積 
	/* 
	for(int i = 0; i < 14;i++)
	{
		for(int j = 0 ; j < 14 ; j++)
		{
			Convolution[i][j] = 
		}
	}
	*/
	/*
	int m, n;
	//放入convolution矩陣 
	for(i = 0; i < 16; i++)
	{
		for(j = 0; j < 16; j++)
		{
			float temp = 0;
			for(m = 0; m < 14;m++)
			{
				for(n = 0; n < 14; n++)
				{
					if((i-m) >= 0 && (i-m) < 3 && (j-n) >= 0 && (j-n) < 3)
						temp += Matrix[m][n] * Kernel[i-m][j-n];
				}
			}
			Convolution[i][j] = temp + Bias[i][j];
		}
	}
	*/
	
	//邪惡的卷積:( //
	int row, column; //乘0、1、2，比較好設定成的個數 
	for(i = 0; i < 14; i++)
	{
		for(j = 0; j < 14; j++)
		{
			float sum = 0;
			row = i;
			column = j;
			for(k = 0; k < 9; k++)
			{
				sum += Matrix[row][column] * Kernel[k];
				printf("Kernel[%d] * Matrix[%d][%d] = %f \n", k, row, column, sum);
				column++;
				if(k % 3 == 2) //因為Kernek原應是3*3矩陣 
				{
					row++;
					column = j; //column回到j 
				}
				
			}
			printf("sum = %f\n", sum);
			Convolution[i][j] = sum + Bias[i][j];
			Result[i][j] = RELU(Convolution[i][j]); //use function
		}
	}
	
	printf("input :\n\n");//將Matrix結果印入Matrix.txt 
	fprintf(Matrix_w,"input :\n\n");
	for(i = 0; i < 16 ; i++)
	{
		for(j = 0 ; j < 16 ; j++)
		{
			printf("%4d ", Matrix[i][j]);
			fprintf(Matrix_w,"%4d ", Matrix[i][j]);
		}
		printf("\n");
		fprintf(Matrix_w,"\n");
	}
	printf("\n");
	
	printf("Bias :\n\n");//將Bias結果印入Bias.txt 
	fprintf(Bias_w,"Bias :\n\n");
	for(i = 0; i < 14 ; i++)
	{
		for(j = 0 ; j < 14 ; j++)
		{
			printf("%4d ",Bias[i][j]);
			fprintf(Bias_w,"%4d ",Bias[i][j]);
		}
		printf("\n");
		fprintf(Bias_w,"\n");
	}
	printf("\n");
	
	
	printf("Kernel :\n");//將Kernel結果印出 
	for(i = 0 ; i < 9 ; i++)
	{
		if(i % 3 == 0)
		{
			printf("\n");
		}
		printf(" %.3f ",Kernel[i]);
	}
	printf("\n\n");
	
	
	printf("Convolution :\n\n");//將Convolution結果印入Conv.txt 
	fprintf(Conv_w,"Convolution :\n\n");
	for(i = 0; i < 14 ; i++)
	{
		for(j = 0 ; j < 14 ; j++)
		{
			printf("%4.0f ",Convolution[i][j]); //%4.0f 將浮點數四捨五入到整數位 
			fprintf(Conv_w,"%4.0f ",Convolution[i][j]);
		}
		printf("\n");
		fprintf(Conv_w,"\n");
	}
	printf("\n");
	
	printf("Result :\n\n");//將Result結果印入Result.txt 
	fprintf(Result_w,"Result :\n\n");
	for(i = 0; i < 14 ; i++)
	{
		for(j = 0 ; j < 14 ; j++)
		{
			printf("%4.0f ",Result[i][j]);
			fprintf(Result_w,"%4.0f ",Result[i][j]);
		}
		printf("\n");
		fprintf(Result_w,"\n");
	}
	printf("\n");
	
	
	
	
	//關檔 
	fclose(Matrix_w);
	fclose(Bias_w);
	fclose(Conv_w);
	fclose(Result_w);
	fclose(Kernel_r);
} 

