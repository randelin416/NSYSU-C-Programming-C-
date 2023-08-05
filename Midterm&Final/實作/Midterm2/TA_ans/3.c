#include "stdio.h"

int main(void) {
	//  開檔 
	FILE *f = fopen("3.txt","r");
	
	// 初始化陣列 
	int arr1[100] = {0};
	int arr2[100] = {0};
	int arr3[100] = {0};
	int arr1Size = 0;
	int arr2Size = 0;
	int arr3Size = 0;
	
	while(1) {
		while(1) {
			// 讀取數字 
			fscanf(f,"%d",&arr1[arr1Size]);
			if(feof(f)) {
				fclose(f);
				return 0;
			}
			if(arr1[arr1Size++] == -1) break;
		}
		while(1) {
			// 讀取數字 
			fscanf(f,"%d",&arr2[arr2Size]);
			if(feof(f)) {
				fclose(f);
				return 0;
			}
			if(arr2[arr2Size++] == -1) break;
		}
		
		// 進行運算 
		for(int i = 0;i<arr1Size;i++) {
			if(arr1[i] == -1) continue;
			for(int j = i+1;j<arr1Size;j++) {
				if(arr1[j] == -1) continue;
				if(arr1[i] == arr1[j]) {
					arr1[j] = -1;
				}
			}
		}
		for(int i = 0;i<arr2Size;i++) {
			if(arr2[i] == -1) continue;
			for(int j = i+1;j<arr2Size;j++) {
				if(arr2[j] == -1) continue;
				if(arr2[i] == arr2[j]) {
					arr2[j] = -1;
				}
			}
		}

		for(int i =0;i<arr1Size;i++) {
			if(arr1[i] == -1) continue;
			for(int j = 0;j<arr2Size;j++) {
				if(arr2[j] == -1) continue;
				if(arr1[i] == arr2[j]) {
					arr3[arr3Size++] = arr1[i];
					break;
				}
			}
		}
		
		for(int i = 0;i<arr3Size;i++) {
			for(int j = i+1;j<arr3Size;j++) {
				if(arr3[i] > arr3[j]) {
					int temp = arr3[i];
					arr3[i] = arr3[j];
					arr3[j] = temp;
				}
			}
		}

		for(int i = 0;i<arr3Size;i++) {
			printf("%d ",arr3[i]);
		}
		printf("\n");

		arr1Size = 0;
		arr2Size = 0;
		arr3Size = 0;
	}
	return 0;
}
