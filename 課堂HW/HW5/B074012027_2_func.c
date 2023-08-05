#include<stdio.h>
#include<math.h>
//input the coefficients of the 3 degree polynimial, and draw the graph
int main(void)
{
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
	
	//find x, y//
	//put y into the array y
	//無條件進位 
	int arrY[60];
	int index = 0, realx = 0;
	float realy;
	for(realx = -30; realx < 31; realx++)
	{
		realy = a * realx * realx * realx + b * realx * realx + c * realx + d;
		arrY[index] = realy;
		if((realy - arrY[index]) == 0)
		    arrY[index] = realy;
		else if((realy - arrY[index]) != 0)
		{
			if(realy > 0)
				arrY[index] = ceil(realy);
			else if(realy < 0)
				arrY[index] = floor(realy);
			
		}
		index++;
		printf("%d\t", arrY[index]);// check value
	}
	//(check value again)
	printf("\n");
	int a1 = -2.88;
	int b1 = floor(-2.88);
	int c1 = ceil(-2.88);
	printf("%d %d %d\n", a1, b1, c1);
	printf("\n");
	for(index = 0; index < 61; index++)
	{
		printf("%d\t", arrY[index]);
	}
	

	//find the number of row//
	int min = arrY[0];
	int max = arrY[0];
	for(index = 1; index < 61; index++)
	{
		if(arrY[index] > max)
			max = arrY[index];
			
		if(arrY[index] < min)
			min = arrY[index];
	}
	//printf("\nmin = %d, max = %d\n", min, max); //check value

	//print the graph//
	int  row,column;
	//row loop
	for(row = min; row < max + 1; row++)
	{
		int arrX[10] = {10000,10000,10000,10000,10000,10000,10000,10000,10000,10000}; 
		int count = 0;
		for(index = 0; index < 61; index++)
		{
			if(row == arrY[index])
			{
				arrX[count] = index-30;
				//printf("\t%d", arrx[count]);
				count++;
			}
		}
		//printf("\n");
		
		//column loop
		int temp;
		for(column = -60; column < 61; column++)
		{
			
			if(column % 2 == 1 || column % 2 == -1)
			{
				printf(" ");
				continue;
			}
			
			//point the polynomial solutions as *
			int check = 1; //for booling, as true 
			for(temp = 0; temp < 10; temp++)
			{
				if((column / 2) == arrX[temp] && column != 0)
				{
					printf("*");
					check = 0;
					break;
				}
			}
			
			//means that if we have solution then stop the loop to find again, then go on to the next row
			if(check == 0)
			{
				continue;
			}
			
			//y axis
			if(column == 0)
			{
				if(row % 10 == 0)
					printf("%d", row); 
				else
					printf("|");
			}
			
			//x axis points number
			else if(row == -1)
			{
				for(column = -60; column < 61; column++)
				{
					if(column == -42)
						printf("-20");
					else if(column == -24)
						printf("-10");
					else if(column == -5)
						printf("0|");
					else if(column == 14)
						printf("10");
					else if(column == 33)
						printf("20");
					else
						printf(" ");
				}
				
			}
			
			//x axis
			else if(row == 0)
			{
				for(column = -60; column < 61; column++)
				{
					if(column == -60 || column == -40 || column == -20 || column == 20 || column == 40)
						printf("|");
					else if(column == 0)
					    printf("0");
					else if(column == 60)
						printf(">");
					else
						printf("-");
				}
			}
			
			//print the name of x axis
			else if(row == 1)
			{
				if(column == 56)
					printf("X軸");
				else
					printf(" ");
			}

			//put space in the remain space
			else
			{
				printf(" ");
			}			
		}
		printf("\n");
	}
	return 0;
}
	

