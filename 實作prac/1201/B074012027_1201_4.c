#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	char *ptr = NULL;
	ptr = arr;

	printf("陣列 1 的值為：%c\n", *ptr);
	printf("陣列 1 的位址為：%p\n", &arr[0]);
	printf("指標一指向的位址為：%p\n\n", ptr);
	
	printf("陣列 2 的值為：%c\n", *(ptr + 1));
	printf("陣列 2 的位址為：%p\n", &arr[1]);
	printf("指標二指向的位址為：%p\n\n", ptr + 1);
	
	printf("陣列 3 的值為：%c\n", *(ptr + 1));
	printf("陣列 3 的位址為：%p\n", &arr[2]);
	printf("指標三指向的位址為：%p\n\n", ptr + 2);
	
	printf("陣列 4 的值為：%c\n", *(ptr + 1));
	printf("陣列 4 的位址為：%p\n", &arr[3]);
	printf("指標四指向的位址為：%p\n\n", ptr + 3);
	
	printf("陣列 5 的值為：%c\n", *(ptr + 1));
	printf("陣列 5 的位址為：%p\n", &arr[4]);
	printf("指標五指向的位址為：%p\n\n", ptr + 4);
	
	system("pause");
	return 0;
} 
