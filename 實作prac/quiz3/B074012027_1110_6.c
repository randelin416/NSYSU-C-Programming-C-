#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//
int main(void)
{
	int x, y, tim;
	printf("�п�J�y�СG");
	scanf("(%d, %d)", &x, &y);
	printf("����ήy�Ь��G(%d, %d) (%d, %d) (%d, %d) (%d, %d)", x-2, y-2, x-2, y+2, x+2, y+2, x+2, y-2);
	printf("���ͮy�СG");
	
	int x1, y1;
	srand(time(NULL));
	for(tim = 1; tim <= 5; tim++)
	{
		if(tim <= 5)
		{
			x1 = rand()%20;
			y1 = rand()%20;
			if((x1 < x+2) && (x1 > x-2) && (y1 < y+2) && (y1 > y-2) )
				printf("(%d, %d)�b����Τ�\n", x1, y1);
			else if((x1 == x+2) || (x1 == x-2) || (y1 == y+2) || (y1 == y-2) )
				printf("(%d, %d)�b�������W\n", x1, y1);
			else
				printf("(%d, %d)�b����Υ~\n", x1, y1);
		}
		else
			break;
	}
	
	return 0;
}
