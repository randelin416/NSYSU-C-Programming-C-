#include<stdio.h>
//
int main(void){
	//input the coefficients//
	float a, b, c, d;
	printf("請輸入a：");
	scanf("%f", &a);
	printf("請輸入b：");
	scanf("%f", &b);
	printf("請輸入c：");
	scanf("%f", &c);
	printf("請輸入d：");
	scanf("%f", &d);
	//function//
	printf("繪製 y = %fx^3 + %fx^2 + %fx + %f\n", a, b, c, d);
	
	//solution of x, y 
	int x;
	int array[60]; //for y values
	int i1 = 0;
	for(x = -30; x < 31; x++)
	{
		array[i1] = a * x * x * x + b * x * x + c * x + d; //將y值放入陣列 
		if(array[i1] < 0)
		{
			array[i1] -= 1;
		}
		else if(array[i1] > 0)
		{
			array[i1] += 1;
		}
		i1++;
	}
	//
	
	//
	
	int m, n, i, j, realx; //m for rows //n for lines
	//n axis(y axis)
	for(i = 0; i < 61; i++)
	{
		//visit the array find x value from y value in the array
		for(i1 = 0; i1 < 61; i1++)
		{
			if((i - 30) == array[i1])
				realx = i1 - 30;
			//m axis(x axis)
			if(i == 30)
			{
				for(m = 0; m < 121; m++)
				{
					if(m == realx)
						printf("*");
					else if(m == 0 || m == 20 || m == 40 || m == 80 || m == 100)
						printf("|");
					else if(m == 60)
					    printf("0");
					else if(m == 120)
						printf(">");
					else
						printf("-");
				}
			}
			// x axis's numbers
			else if(i == 29)
			{
				for(j = 0; j < 121; j++)
				{
					if(j == realx)
						printf("*");
					else if(j == 20)
						printf("-20");
					else if(j == 38)
						printf("-10");
					else if(j == 55)
						printf("0|");
					else if(j == 74)
						printf("10");
					else if(j == 93)
						printf("20");
					else
					    printf(" ");
				}
			}
			//x axis's name
			else if(i == 31)
			{
				for(j = 0; j < 121; j++)
				{
					if(j == realx)
						printf("*");
					else if(j == 60)
						printf("|");
					else if(j == 116)
						printf("X軸");
					else
					    printf(" ");
				}
			}
			//a row's working
			else
			{
				for(n = 0; n < 121; n++)
				{
					if(n == realx)
							printf("*");
					else if(n == 59)
					{
						if(i == 10)
					    	printf("-20");
						else if(i == 20)
						    printf("-10");
						else if(i == 30)
						    printf("0");
						else if(i == 40)
						    printf("10");
						else if(i == 50)
						    printf("20");
						else
							printf("|");
					}
					else 
						printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
