#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
int main(void)
{
	FILE *fp;
	fp = fopen("File_Example.txt", "w");
	char arr[20];
	
	char word = 'R';
	fputc(word, fp);
	fputs("\nFile operation example.", fp);
	
	scanf("%s", arr);
	fputs(arr[20], fp);
	
	fclose(fp);
	return 0;
}
