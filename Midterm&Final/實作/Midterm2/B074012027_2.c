#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//mid2 pm

int priority(char a)
{
	switch(a)
	{
		case 'I':
			return 1;
			break;
		case 'V':
			return 2;
			break;
		case 'X':
			return 3;
			break;
		case 'L':
			return 4;
			break;
		case 'C':
			return 5;
			break;
		case 'D':
			return 6;
			break;
		case 'M':
			return 7;
			break;
	}
}
int main()
{
	char arr[100];
	int i, num, wnum;
	FILE *fp_r;
	fp_r = fopen("2.txt", "r");
	if((fp_r = fopen("2.txt", "r")) == NULL)
		printf("Cannot Open File!\n");
	else
	{
		fgets(arr, 10, fp_r);	
		printf("%s", arr);
		printf("\n");
		
		int len = strlen(arr);
		for(i = 0; i < len; i++)
		{
			char a = arr[i];
			char b = arr[i+1]; 
			if(priority(a) < priority(b))
			{
				switch(arr[i])
				{
					case 'I':
						wnum -= 1;
						break;
					case 'V':
						wnum -= 5;
						break;
					case 'X':
						wnum -= 10;
						break;
					case 'L':
						wnum -= 50;
						break;
					case 'C':
						wnum -= 100;
						break;
					case 'D':
						wnum -= 500;
						break;
					case 'M':
						wnum -= 1000;
						break;
				}
			}
			else
			{
				switch(arr[i])
				{
					case 'I':
						wnum += 1;
						break;
					case 'V':
						wnum += 5;
						break;
					case 'X':
						wnum += 10;
						break;
					case 'L':
						wnum += 50;
						break;
					case 'C':
						wnum += 100;
						break;
					case 'D':
						wnum += 500;
						break;
					case 'M':
						wnum += 1000;
						break;
				}
			}
			num = num + wnum;
		}
		printf("%d\n", num);
		
	}
	
	fclose(fp_r);
	return 0;
}
