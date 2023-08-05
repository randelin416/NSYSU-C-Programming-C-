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
		printf("姓名：");
		scanf("%s", name);
		printf("電話：");
		scanf("%d", &tel);
		printf("地址：");
		scanf("%s", ad);
		fprintf(fp, "姓名：%s\n電話：%s\n地址：%s\n", name, tel, ad);
	}
	
	fclose(fp);
	return 0;
}
