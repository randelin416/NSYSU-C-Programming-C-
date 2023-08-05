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
	
	
	
	srand(5);//�]�w�@�˪��üƺؤl 
	
	int i, j, k;
	for(i = 0; i < 16;i++)//�üƲ���Matrix 
	{
		for(j = 0 ; j < 16 ; j++)
		{
			
			Matrix[i][j] = (rand()%20) - 10;
		}
	}
	
	for(i = 0; i < 14;i++)//�إ�Bias�Ϊ�l��Convolution,Result 
	{
		for(j = 0 ; j < 14 ; j++)
		{
			
			Bias[i][j] = 1;
			//���w�] 
			Convolution[i][j] = 0;
			Result[i][j] = 0;
		}
	}
	
	for(i = 0 ; i < 9 ; i++)//Ū��Kernel�� 
	{	
		//fscanf(�q���Щҫ��쪺�ɮצ�m�}�lŪ���A"Ū������ƫ��A"�A���ݭn���}�C 
		fscanf(Kernel_r,"%f",&Kernel[i]); //&?? 
	}

	
	//�ѤU�o��F�A�p����n 
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
	//��Jconvolution�x�} 
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
	
	//���c�����n:( //
	int row, column; //��0�B1�B2�A����n�]�w�����Ӽ� 
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
				if(k % 3 == 2) //�]��Kernek�����O3*3�x�} 
				{
					row++;
					column = j; //column�^��j 
				}
				
			}
			printf("sum = %f\n", sum);
			Convolution[i][j] = sum + Bias[i][j];
			Result[i][j] = RELU(Convolution[i][j]); //use function
		}
	}
	
	printf("input :\n\n");//�NMatrix���G�L�JMatrix.txt 
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
	
	printf("Bias :\n\n");//�NBias���G�L�JBias.txt 
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
	
	
	printf("Kernel :\n");//�NKernel���G�L�X 
	for(i = 0 ; i < 9 ; i++)
	{
		if(i % 3 == 0)
		{
			printf("\n");
		}
		printf(" %.3f ",Kernel[i]);
	}
	printf("\n\n");
	
	
	printf("Convolution :\n\n");//�NConvolution���G�L�JConv.txt 
	fprintf(Conv_w,"Convolution :\n\n");
	for(i = 0; i < 14 ; i++)
	{
		for(j = 0 ; j < 14 ; j++)
		{
			printf("%4.0f ",Convolution[i][j]); //%4.0f �N�B�I�ƥ|�ˤ��J���Ʀ� 
			fprintf(Conv_w,"%4.0f ",Convolution[i][j]);
		}
		printf("\n");
		fprintf(Conv_w,"\n");
	}
	printf("\n");
	
	printf("Result :\n\n");//�NResult���G�L�JResult.txt 
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
	
	
	
	
	//���� 
	fclose(Matrix_w);
	fclose(Bias_w);
	fclose(Conv_w);
	fclose(Result_w);
	fclose(Kernel_r);
} 

