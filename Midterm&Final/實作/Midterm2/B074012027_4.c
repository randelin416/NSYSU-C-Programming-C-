#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//mid2 pm

int main()
{
	FILE *fp_r;
	fp_r = fopen("4.txt", "r");
	if((fp_r = fopen("4.txt", "r")) == NULL)
		printf("Cannot Open File!\n");
	else
	{
		int i, word = 0, num = 1;
		char str[100];
		fgets(str, 25, fp_r);	
		//printf("%s\n", str);
		
		for(i = 0; i < 100; i++)
		{
				if(str[i] == ' ')
					word = 0;
				else
					word = 1;
				if(word == 0)
					num++;
		}
		printf("%d\n", num);
		
		word = 0;
		num = 1;
		char str2[100];
		fgets(str2, 25, fp_r);	
		//printf("%s\n", str2);
		
		for(i = 0; i < 100; i++)
		{
				if(str2[i] == ' ')
					word = 0;
				else
					word = 1;
				if(word == 0)
					num++;
		}
		printf("%d\n", num);
	
		
		//while()
	}
	
	fclose(fp_r);
	
	return 0;
}
