#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * integer2Roman (int input) {
	char *ans = malloc(sizeof(char)*100);
	strcpy(ans,"");
		
	// �ж�Ŧ��禡
	// IV�G4 V�G5 IX�G9 X�G10 XL�G40 L�G50 XC�G90 C�G100 CD�G400 D�G500 CM�G900 M�G1000
	
	return ans;
}

int main(int argc, char *argv[]) {
	FILE *file = fopen("2.txt","r");
	int input;
	char *output;

	while(1) {
		fscanf(file,"%d",&input);
		printf("%d", input);
		if(feof(file)) break;
		output = integer2Roman(input);
		printf("%s\n",output); 
	}
	return 0;
}

