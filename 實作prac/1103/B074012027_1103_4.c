#include<stdio.h>
#include<stdlib.h>
//Is the input a palindrome string?
int main(void)
{
	int i, len;
	char str[100];

	//set while to keep looping the program
	while(1)
	{
		int check = 1;
		//input the string
		printf("�п�J�r��(��J0���X)�G");
		scanf("%s", str);
		
		//while input 0 stop the program
		if(str[0] == '0')
			break;
		else
		{
			//count the lengh of the string
			len = strlen(str);
			
			//compare if the first and last element of the string are the same
			for(i = 0; i <= (len / 2); i++)
			{
				if(str[i] != str[len - 1 - i])
					check = 0;
			}
			//print the result
			if(check == 0)
				printf("���O�j��\n");
			else
				printf("�O�j��\n");
		}
		
	}
	
	
	return 0;
}
