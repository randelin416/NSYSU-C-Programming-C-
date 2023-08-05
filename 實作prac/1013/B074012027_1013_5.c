#include<stdio.h>
//int an 2*3 array, then print it and its transpose array out 
int main(void){
	int i, j, temp; //temp for transpose using
	int a[2][3];
	//2*3 array, users can input the values
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d] = ", i, j);
		    scanf("%d", &a[i][j]);
		}
	}
	//print out array
	printf("原矩陣\n");
	for(i=0;i<2;i++){
	    for(j=0;j<3;j++){
			printf("%3d", a[i][j]); //%3d 為對齊 
			
		}
		printf("\n");
	}
	//transpose (3*2 array)
	for(i=0;i<2;i++){
	    for(j=i;j<3;j++){ //j=i 為了不讓轉置後的元素再被轉置一次
	    	if (j>i){
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
	        }
		}
		printf("\n");
	}
	//print out tranpose array
	printf("轉置矩陣\n");
	for(j=0;j<3;j++){
	    for(i=0;i<2;i++){
	    	printf("%3d", a[j][i]);	
	    }
		printf("\n");
	}
	return 0;
}
