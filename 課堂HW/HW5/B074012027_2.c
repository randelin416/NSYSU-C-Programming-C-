#include<stdio.h>

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
	
	int arry[60];
	int index = 0, realx = 0;
	float realy;
	for(realx = -30; realx < 31; realx++)
	{
		realy = a * realx * realx * realx + b * realx * realx + c * realx + d;
		arry[index] = realy;
		if((realy - arry[index]) == 0)
		    arry[index] = realy;
		else if((realy - arry[index]) != 0)
		{
			if(realy > 0)
				arry[index] ++;
			else if(realy < 0)
				arry[index] --;
			
		}
		index++;
		//printf("%d\t", arry[index]);// check value
	}
	/*(check value again)
	printf("\n");
	for(index = 0; index < 61; index++)
	{
		printf("%d\t", arry[index]);
	}
	*/
	

	//find the number of row//
	int min = arry[0];
	int max = arry[0];
	for(index = 1; index < 61; index++)
	{
		if(arry[index] > max)
			max = arry[index];
			
		if(arry[index] < min)
			min = arry[index];
	}
	//printf("\nmin = %d, max = %d\n", min, max); //check value
	
	//print the graph//
	int row, column;

	//row loop

	for(row = min; row < max + 1; row++)
	{

		//put x into the array x
		int count = 0;
		int arrx[10] = {10000,10000,10000,10000,10000,10000,10000,10000,10000,10000}; 
		for(index = 0; index < 61; index++)
		{
			if(row == arry[index])
			{
				arrx[count] = index - 30;
				//printf("\t%d", arrx[count]);
				count++;
			}
		}
		//printf("\n");
	
	
		//column loop
		int temp;
		for(column = -60; column < 61; column ++)
		{
			//2 columns be 1 unit
			if(column % 2 == 1 || column % 2 == -1)
			{
				printf(" ");
				continue;
			}
			
			//point the polynomial solutions as *
			int check = 1; //for booling, as true
			for(temp = 0; temp < 10; temp++)
			{
				if((column / 2) == arrx[temp] && column != 0)
				{
					printf("*");
					check = 0; //turn as false
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
		printf("\n"); //each row	
	}
	return 0;
}
