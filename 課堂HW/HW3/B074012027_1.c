#include<stdio.h>
//判斷輸入之座標位於哪一象限 
//使0印出時為整數形式 
int main(void){
	//鍵盤輸入x、y座標值 
	float a, b;
	printf("Please enter x coordinate : ");
	scanf("%f", &a);
	printf("Please enter y coordinate : ");
	scanf("%f", &b);
	//判斷x、y座標值之正負以求座標位於哪個象限
	if(a>0){
	    if(b>0)
	        printf("point (%f,%f) is in the first quadrant.\n", a, b);
	    else if(b<0)
	        printf("point (%f,%f) is in the forth quadrant.\n", a, b);
	    else
	        printf("point (%f,%d) is not in any quadrant.\n", a, b); // y座標值=0不位在任何象限上
	} 
	else if(a<0){
	    if(b>0)
	        printf("point (%f,%f) is in the second quadrant.\n", a, b);
	    else if(b<0)
	        printf("point (%f,%f) is in the third quadrant.\n", a, b);
	    else
	        printf("point (%f,%d) is not in any quadrant.\n", a, b); // y座標值=0不位在任何象限上
	}
	//x座標值 = 0時不位在任何象限上
	else{
        if(b>0 || b<0)
	        printf("point (%d,%f) is not in any quadrant.\n", a, b);
	    else
	        printf("point (%d,%d) is not in any quadrant.\n", a, b); //原點不位在任何象限上 
    }
	return 0;
}
