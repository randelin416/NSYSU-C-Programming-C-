#include<stdio.h>
//use fprintf and fputs to write a string to a new txt file
int main(void)
{
	FILE *fp;
	fp = fopen("firstfile.txt", "w");
	
	fputs("Hello World\n", fp);
	fprintf(fp, "%s", "C Programming.\n");
	
	fclose(fp);
	return 0;
}
