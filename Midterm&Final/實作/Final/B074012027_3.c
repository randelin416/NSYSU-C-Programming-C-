#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validPalindrome(char s[]) {
	// 請填空此函式
	
	//大寫(ASCII：65~90)先改小寫(ASCII：97~122) 再刪除符號//
	
	//大寫改小寫
	int i;
	for(i = 0; i < strlen(s); i++)
	{
		if(s[i] <= 90 && s[i] >= 65)
		{
			s[i] += 32;
		}
		printf("%c", s[i]);
	}
	
	//刪除符號與空格 
	int n = 0; 
	char arr[100];
	for(i = 0; i < strlen(s); i++)
	{
		if(s[i] < 123 && s[i] > 96 )
		{
			arr[n] = s[i]; 
			n++;
		}
	}
	arr[n] = '\0';
	printf("%s\n", arr);
	
	//palindrome
	int check = 1;
	//printf("%d\n", strlen(arr));
	for(i = 0; i <= strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
	for(i = 0; i <= (strlen(arr) / 2); i++)
	{
		if(arr[i] != arr[strlen(arr)-1-i])
		{
			check = 0;
		}
	}
	//printf("%c", arr[strlen(arr)-5]);
	//printf("%c", arr[4]);
	
	if(check == 0)
	{
		//printf("false\n");
		return 0;
	}
	else
	{
		//printf("true\n");
		return 1;
	}
	
}



int main(int argc, char *argv[]) {
	FILE *file = fopen("3.txt","r");
	int result;
	char s[100];
	
	/*
	char a = ' ';
	printf("%d\n", a);
	*/

	while(1) {
		fgets(s,100,file);
		//printf("%s", s);
		if(feof(file)) break;
		result = validPalindrome(s);
		printf("%s\n", result ? "true" : "false");
	}
	return 0;
}
