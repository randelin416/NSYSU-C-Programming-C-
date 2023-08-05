#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char text[200];
	int i, count = 0;
	FILE *fp;
	FILE *fp_r;
	fp_r = fopen("7-2_Result.txt", "w");
	
	if((fp = fopen("Test.txt", "r")) == NULL)
		printf("File could not be open.\n");
	
	else
	{
		while(fgets(text, 200, fp))
		{
			int x = 0, y = 0; 
			for(i = 0; i < 200; i++)
			{
				//printf("%c", text[i]);
				if(text[i] == 'U')
					y++;
				else if(text[i] == 'D')
					y--;
				else if(text[i] == 'R')
					x++; 
				else if(text[i] == 'L')
					x--;
				else if(text[i] == '\0')
				{
					count++;
					break;
				}
			}
			
			if(x == 0 && y == 0)
			{
				printf("第%d個字串：True\n", count);
				fprintf(fp_r, "第%d個字串：True\n", count);
			}
			else
			{
			
				printf("第%d個字串：False\n", count);
				fprintf(fp_r, "第%d個字串：False\n", count);
			}
		}
		
	}
	
	fclose(fp);
	fclose(fp_r);
	
	return 0;
}
