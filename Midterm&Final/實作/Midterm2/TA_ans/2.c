#include "stdio.h"
#include "string.h"

int main(void) {
	//  �}��
	FILE *f = fopen("2.txt","r");

	// ��l�ư}�C
	char arr[100] = {'\0'};
	int arrSize = 0;

	while(1) {

		// Ū���r��
		fscanf(f,"%s",arr);
		if(feof(f)) {
			fclose(f);
			return 0;
		}

		// IV�G4 V�G5 IX�G9 X�G10 XL�G40 L�G50 XC�G90 C�G100 CD�G400 D�G500 CM�G900 M�G1000
		// �i��B��
		int ans = 0;
		for(int idx = 0; idx<strlen(arr); idx++) {
			if(arr[idx] == 'I') {
				if(arr[idx+1] == 'V') {
					ans +=4;
					idx++;
				}
				else if(arr[idx+1] == 'X') {
					ans +=9;
					idx++;
				} else {
					ans +=1;
				}
			} else if(arr[idx] == 'X') {
				if(arr[idx+1] == 'L') {
					ans +=40;
					idx++;
				}
				else if(arr[idx+1] == 'C') {
					ans +=90;
					idx++;
				} else {
					ans +=10;
				}
			} else if(arr[idx] == 'C') {
				if(arr[idx+1] == 'D') {
					ans +=400;
					idx++;
				}
				else if(arr[idx+1] == 'M') {
					ans +=900;
					idx++;
				} else {
					ans +=100;
				}
			} else if(arr[idx] == 'V') {
				ans +=5;
			} else if(arr[idx] == 'L') {
				ans +=50;
			} else if(arr[idx] == 'D') {
				ans +=500;
			} else if(arr[idx] == 'M') {
				ans +=1000;
			}
		}

		printf("%d\n",ans);
	}
	return 0;
}
