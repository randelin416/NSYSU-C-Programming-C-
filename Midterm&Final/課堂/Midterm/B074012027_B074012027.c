#include<stdio.h>
#

int main(void)
{
	
	//a.//
	int i;
	int x[2000], y[2000]; 
	srand(1);
	for (i = 0; i < 2000; i++)
	{
		x[i] = rand() % 4000 - 2000;
		y[i] = rand() % 4000 - 2000;
		//printf("%d %6d%6d\n",i + 1, x[i], y[i]);
	}
	
	
	//check min, max
	
	int minX = x[0], maxX = x[0];
	for(i = 1; i < 2000; i++)
	{
		if(x[i] > maxX)
			maxX = x[i];
		if(x[i] < minX)
			minX = x[i];
	}
	//printf("min = %d, max = %d\n", minX, maxX);
	
	int minY = y[0], maxY = y[0];
	for(i = 1; i < 2000; i++)
	{
		if(y[i] > maxY)
			maxY = y[i];
		if(y[i] < minY)
			minY = y[i];
	}
	//printf("min = %d, max = %d\n", minY, maxY);
	
	
	//b.//
	//sorting y from large to small
	int sort;
	int Xmin, Xmax, Ymin, Ymax;
	printf("使用 1.泡沫排序法 2.插入排序法 3.選擇排序法 ");
	scanf("%d", &sort);
	 
	int j, k, min, temp;
	int max = x[0];
	/*
	switch(sort)
	{
		//bubble sort:compare 2 datas, swap if x[i] < x[i+1]
		case 1:
		 	int j, k, temp;
			for(i = 0; i < 2000; i++)
			{
				j = i + 1;
				if(x[j] > x[i])
				{
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
				
				if(x[j] > x[i])
					{
						temp = x[i];
						x[i] = x[j];
						x[j] = temp;
					}
			}
				printf("\n%d%d", x[0], y[0]);
		 		
		//insertion sort:choose a number and put it to the approximately space
		case 2:
			for(i = 2000; i >= 0; i--)
		    {
		    	temp = x[i];
		    	for(j = 0; j<2000;j++)
				{
		    		if(x[i] > x[j-1])
				}
		    	
		    }
		 	
		//selection sort:choose max put into the first (second, ...) space
		case 3:
		
		    for(i = 0; i < 2000; i++)
		    {
				 	for(j = i+1; j < 2000; j++)
				 	{
				 		if(x[j] > max)
				 			max = x[j];
					}
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
					
					printf("%d\n", x[i]);
			}
	}	
	printf("min = %d, max = %d\n", x[2000], x[0]);
	*/
	printf("X之最小值為：%d，X之最大值為：%d，Y之最小值為：%d，Y之最大值為：%d\n", minX, maxX, minY, maxY);
	
	//c.//
	int aria;
	aria = (maxX - minX) * (maxY - minY);
	printf("矩形面積為：%d\n", aria);
	
	/*	
	//c.//
	int aria;
	aria = (Xmax - Xmin) * (Ymax - Ymin);
	printf("矩形面積為：%d\n", aria);
	*/
	
	//d.//
	//draw the graph
	int row, column;
	for(row = 2050; row > -2051; row--)
	{
		
		for(column = -2050; column < 2051; column++)
		{
			if()
			
			//x axis
			if(row ==0)
			{
				if((column % 100 == 0) && column != 0)
					printf("|");
				else if(column == 0)
					printf("0");
				else if(column == 2050)
					printf(">");
				else
					printf("-");
			}
			
			//y axis 
			else if(column == 0)
			{
					if(row % 100 == 0 && row != 0)
						printf("%d", row);
					else if(row == 2050)
						printf("^");
					else if(row != 1)
						printf("|");
			}
			
			//point numbers on the x axis
			else if(row == 1)
			{
				if(column < 0)
				{
					if(column % 100 == -2)
						printf("%d", row) ;
				} 
				else if(column > 0)
				{
					if(column % 100 == 99)
						printf("%d", row) ;
				} 
			}
			
			else if(row == -2050)
			{
				if(column == 2)
					printf("Y軸");
				else 
					printf(" ");
			}
			//the name of x axis
			else if(row == -1)
			{
				if(column == 2046)
					printf("X軸");
				else
					printf(" ");
			}
			else
				printf(" ");

		}
	printf("\n");
	}
	
	return 0;
} 
