#include<stdio.h>
#include<stdlib.h>
//
int main(void)
{
	FILE *fp;
	fp = fopen("File_Example.txt", "w+");
	
	//make a file
	fputs("This is line 1. \n", fp);
	fputs("This is line 2. \n", fp);
	fputs("This is line 3.", fp);
	rewind(fp);

	int size = 1;
	int Read_Data_Times = 16;
	int Data_Length = 16;
	
	char Char_in_file = NULL;
	
	char String_in_file1[20];
	char String_in_file2[20];
	char String_in_file3[20];
	
	char String_in_file4[20];
	
	char String_in_file5[20];
	
	
	if(fp == NULL)
	{
		printf("File does not exist!!");
		return 1;
	}
	else
	{
		int select = 1;
		while(select != 0)
		{
			printf("�п��Ū�ɤ覡�G\n1. ��getc()Ū���ɮ�\n2. ��fscanf()Ū���ɮ�\n3. ��fgets()Ū���ɮ�\n4. ��fread()Ū���ɮ�\n");
			scanf("%d", &select);
			
			switch(select)
			{
				case 0 :
					break;
				case 1 :
					printf("��getc()Ū���ɮסG\n");
					do
					{
						Char_in_file = getc(fp);
						printf("%c", Char_in_file);
					}
					while(Char_in_file != EOF);
					rewind(fp);
					break;
				case 2 :
					printf("��fscanf()Ū���ɮסG\n");
					//use %[^\n] to read the space element
					fscanf(fp, "%[^\n] %[^\n] %[^\n]", String_in_file1, String_in_file2, String_in_file3);
					printf("%s\n%s\n%s\n", String_in_file1, String_in_file2, String_in_file3);
					rewind(fp);
					break;
				case 3 :
					printf("��fgets()Ū���ɮסG\n");
					do
					{
						fgets(String_in_file4, Data_Length, fp);
						printf("%s\n", String_in_file4);
					}
					while(fgets(String_in_file4, Data_Length, fp) != NULL);
					rewind(fp);
					break;
				case 4 :
					printf("��fread()Ū���ɮסG\n");
					do
					{
						int read = fread(String_in_file5, size, Read_Data_Times, fp);
						String_in_file5[read] = '\0';
						printf("%s", String_in_file5);
					}
					while(!feof(fp));
					rewind(fp);
					break;
				default :
					break;
			
			}	
			printf("\n-------------------------------------\n");
		}	
	}
	
	
	fclose(fp);
	return 0;
}
