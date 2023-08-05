#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//
int main(void)
{
	int x, y, tim;
	printf("請輸入座標：");
	scanf("(%d, %d)", &x, &y);
	printf("正方形座標為：(%d, %d) (%d, %d) (%d, %d) (%d, %d)", x-2, y-2, x-2, y+2, x+2, y+2, x+2, y-2);
	printf("產生座標：");
	
	int x1, y1;
	srand(time(NULL));
	for(tim = 1; tim <= 5; tim++)
	{
		if(tim <= 5)
		{
			x1 = rand()%20;
			y1 = rand()%20;
			if((x1 < x+2) && (x1 > x-2) && (y1 < y+2) && (y1 > y-2) )
				printf("(%d, %d)在正方形內\n", x1, y1);
			else if((x1 == x+2) || (x1 == x-2) || (y1 == y+2) || (y1 == y-2) )
				printf("(%d, %d)在正方形邊上\n", x1, y1);
			else
				printf("(%d, %d)在正方形外\n", x1, y1);
		}
		else
			break;
	}
	
	return 0;
}
