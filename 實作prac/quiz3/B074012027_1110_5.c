#include<stdio.h>
#include<stdlib.h>
//
int main(void)
{
	int tel;
	char name[20];
	char ad[30];
	
	FILE *fp;
	fp = fopen("phone.txt", "w");
	
	if(fp = fopen("phone.txt", "w") == NULL)
	{
		printf("File could not be opened.\n");
	}
	else
	{
		printf("�m�W�G");
		scanf("%s", name);
		printf("�q�ܡG");
		scanf("%d", &tel);
		printf("�a�}�G");
		scanf("%s", ad);
		fprintf(fp, "�m�W�G%s\n�q�ܡG%s\n�a�}�G%s\n", name, tel, ad);
	}
	
	fclose(fp);
	return 0;
}
