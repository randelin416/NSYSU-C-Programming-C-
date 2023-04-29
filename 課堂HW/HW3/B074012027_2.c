#include<stdio.h>
//輸入一水果之大小與甜度 依照標準判斷級別 
int main(void){
	//鍵盤輸入水果之大小與甜度
	char a;
	int b;
	printf("Please enter size : ");
	scanf("%c", &a);
	//輸入正確大小才可繼續輸入甜度 
	if(a == 's' || a == 'm' || a == 'l' || a == 'e'){
	    printf("Please enter sweetness : ");
	    scanf("%d", &b);
	    
	    //判斷水果分級
		if(b>1 && b<100){
	        if((a == 'l' || a == 'e') && b>=85)
	            printf("This fruit is Premium class.\n", a, b);
	        else if((a == 'm' || a == 'l' || a == 'e') && b>=60)
	            printf("This fruit is Gifted class.\n", a, b);
	        else if(b>=40)
	            printf("This fruit is Regular class.\n", a, b);
	        else if(b<40)
	            printf("This fruit is Inferior class.\n", a, b); 
	    }
	    else
	        printf("Wrong fruit sweetness ! \n");
    }
    else
        printf("Wrong fruit size ! \n");
	return 0;
}
