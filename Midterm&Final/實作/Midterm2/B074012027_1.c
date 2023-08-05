#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//mid2 pm

int main()
{
	int height[100];
	int i, j, n = 0;
	FILE *fp_r;
	fp_r = fopen("1.txt", "r");
	if((fp_r = fopen("1.txt", "r")) == NULL)
		printf("Cannot Open File!\n");
	else
	{
		//first line
		for(i = 0; i < 100; i++)
		{
			fscanf(fp_r, "%d", &height[i]);
			if(height[i] == -1)
			{
				n--;
				break;
			}
			else
			{
				printf("%3d", height[i]);
				n++;
			}
		}
		printf("\n");
		
		/*
		int lomax, lomax2, max = height[0], max2;
		for(i = 0; i <= n; i++)
		{
			if(height[i] > max)
			{
				max2 = max;
				max = height[i];
			}
		}
		
		for(i = 0; i <= n; i++)
		{
			if(height[i] == max)
				lomax = i;
		}
		for(i = 0; i <= n; i++)
		{
			if(height[i] == max2)
				lomax2 = i;
		}
		printf("Max = %4d i = %d Max2 = %4d i = %d\n", max, lomax, max2, lomax2);
		*/
		
		int len, width[100];
		for(i = 0; i <= n; i++)
		{
			for(j = i; j <= n; j++)
			{
				width[100] = height[i] - height[j];
				len++;
			}	
		}
		int max = width[0];
		for(i = 0; i <= n; i++)
		{
			
		}
		
		int area;
		area = (max - max2) ; 
		
		printf("Max area = %d\n", area);
		
		
		for(i = 0; i < 100; i++)
		{
			int n = 0;
			fscanf(fp_r, "%d", &height[i]);
			if(height[i] == -1)
			{
				n--;
				break;
			}
			else
			{
				printf("%3d", height[i]);
				n++;
			}
		}
	}
	
	fclose(fp_r);
	return 0;
}
