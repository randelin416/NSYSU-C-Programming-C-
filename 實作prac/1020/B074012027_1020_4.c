#include<stdio.h>
//linear search : 
int main(void){
	int i, search, a[20];
	printf("�u�ʷj�M\n");
	//print out the random numbers (20)
	printf("�ƦC�G");
	srand(time(NULL));
	for(i = 0; i < 20; i++)
	{
		a[i] = rand() % 15 + 1;
		printf("%d ", a[i]);
	}
	//enter a numer to search//
	printf("\n�j�M�Ʀr�G");
	scanf("%d", &search);
	//linear search//
	printf("�j�M�Ʀr�b�� ");
	for(i = 0; i < 20; i++)
	{
		if(a[i] == search)
		{
			printf("%d ", i + 1);
		}
	}
	printf(" �Ӧ�m\n");
	return 0;
}
