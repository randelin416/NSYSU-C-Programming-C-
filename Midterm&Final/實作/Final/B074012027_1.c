#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateString(char s[],char goal[]){
	// 請填空此函式 
	int i, k, check = 1;
	
	//rotating once
	for(k = 0; k < 5; k++)
	{
		char temp0 = s[0];
		for(i = 0; i < strlen(s); i++)
		{
			char temp = s[i+1];
			s[i] = temp;
		}
		s[strlen(s)] = temp0;
		
		printf("%s\n", s);
		
		for(i = 0; i < strlen(s); i++)
		{
			if(s[i] != goal[i])
			{
				check = 0;
			}
		}
	}
	
	if(check == 0)
		return 0;
	else
		return 1;
	
}

int main(int argc, char *argv[]) {
	FILE *file = fopen("1.txt","r");
	int result;
	char s[100],goal[100];
	
	while(1){
		fscanf(file,"%s",s);
		printf("%s", s);
		//printf("%d\n", strlen(s));
		fscanf(file,"%s",goal);
		printf("%s", goal);
		//printf("%d\n", strlen(goal));
		if(feof(file)) break;
		result = rotateString(s,goal);
		printf("%s\n", result ? "true" : "false");
	} 
	return 0;
}

