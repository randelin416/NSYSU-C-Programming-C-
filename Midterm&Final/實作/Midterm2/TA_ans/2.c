#include "stdio.h"
#include "string.h"

int main(void) {
	//  開檔
	FILE *f = fopen("2.txt","r");

	// 初始化陣列
	char arr[100] = {'\0'};
	int arrSize = 0;

	while(1) {

		// 讀取字串
		fscanf(f,"%s",arr);
		if(feof(f)) {
			fclose(f);
			return 0;
		}

		// IV：4 V：5 IX：9 X：10 XL：40 L：50 XC：90 C：100 CD：400 D：500 CM：900 M：1000
		// 進行運算
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
