#include<stdio.h>
//��J�@���G���j�p�P���� �̷ӼзǧP�_�ŧO 
int main(void){
	//��L��J���G���j�p�P����
	char a;
	int b;
	printf("Please enter size : ");
	scanf("%c", &a);
	//��J���T�j�p�~�i�~���J���� 
	if(a == 's' || a == 'm' || a == 'l' || a == 'e'){
	    printf("Please enter sweetness : ");
	    scanf("%d", &b);
	    
	    //�P�_���G����
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
