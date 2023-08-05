#include<stdio.h>
#include<stdlib.h>
//print a string out, and print out the elements of the string one by one.
int main(void)
{
	char str[20] = "I am Groot";
	int i;
	printf("%s", str);
	printf("\n");
	for(i = 0; str[i] != '\0'; i++)
	{
		printf("²Ä%d­Ó¦r¤¸¡G%c\n", i, str[i]); //why go on i = 10
	}
	
	return 0;
}
