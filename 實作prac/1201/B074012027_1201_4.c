#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	char *ptr = NULL;
	ptr = arr;

	printf("�}�C 1 ���Ȭ��G%c\n", *ptr);
	printf("�}�C 1 ����}���G%p\n", &arr[0]);
	printf("���Ф@���V����}���G%p\n\n", ptr);
	
	printf("�}�C 2 ���Ȭ��G%c\n", *(ptr + 1));
	printf("�}�C 2 ����}���G%p\n", &arr[1]);
	printf("���ФG���V����}���G%p\n\n", ptr + 1);
	
	printf("�}�C 3 ���Ȭ��G%c\n", *(ptr + 1));
	printf("�}�C 3 ����}���G%p\n", &arr[2]);
	printf("���ФT���V����}���G%p\n\n", ptr + 2);
	
	printf("�}�C 4 ���Ȭ��G%c\n", *(ptr + 1));
	printf("�}�C 4 ����}���G%p\n", &arr[3]);
	printf("���Х|���V����}���G%p\n\n", ptr + 3);
	
	printf("�}�C 5 ���Ȭ��G%c\n", *(ptr + 1));
	printf("�}�C 5 ����}���G%p\n", &arr[4]);
	printf("���Ф����V����}���G%p\n\n", ptr + 4);
	
	system("pause");
	return 0;
} 
