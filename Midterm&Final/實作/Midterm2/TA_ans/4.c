#include "stdio.h"
#include "string.h"

int main(void) {
	//  開檔
	FILE *f = fopen("4.txt","r");

	// 初始化陣列
	char s[100] = {'\0'};

	while(1) {

		// 讀取字串
		fgets(s,100,f);
		if(feof(f)) {
			fclose(f);
			return 0;
		}

		int len = strlen(s);
		if(len == 0) return 0;
		int count = 0;
		for(int i = 0; i<len-1; i++) {
			if(s[i] != ' ') {
				count++;
				while(s[++i] != ' ' && i<len-1);
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
