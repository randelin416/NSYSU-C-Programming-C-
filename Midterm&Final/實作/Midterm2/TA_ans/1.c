#include "stdio.h"

int main(void) {
	//  �}�� 
	FILE *f = fopen("1.txt","r");
	
	// ��l�ư}�C 
	int height[100] = {0};
	int heightSize = 0;
	
	while(1) {
		while(1) {
			// Ū���Ʀr 
			fscanf(f,"%d",&height[heightSize]);
			if(feof(f)) {
				fclose(f);
				return 0;
			}
			if(height[heightSize++] == -1) break;
		}
		
		// �i��B�� 
		int ans = 0;
    	for(int head = 0;head<heightSize-1;head++){
	        for(int tail = head+1;tail<heightSize-1;tail++){
		        int minHeight = height[head] < height[tail] ? height[head] : height[tail];
		        int water = minHeight*(tail-head);
		        if(water > ans) ans = water;
        	}
    	}
		
		printf("%d\n",ans);
		heightSize = 0;
	}
	return 0;
}
