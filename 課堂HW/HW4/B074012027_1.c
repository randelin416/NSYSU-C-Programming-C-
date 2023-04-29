#include<stdio.h>
#include<stdlib.h>
#define bool int
#define true 1
#define false 0
//make an even num = prime1 + prime2
//prime function
int prime(int num){ //int prime(int num)
	//prime
	int i;
    for(i=2;i<=num/2;i++){
	    if(num % i == 0)
	        return false; //not prime
    }
    return true; //is prime
}
int main(void){
	int num, i, prime1 = 2, prime2 = 2;
	printf("請輸入大於2的偶數：");
	scanf("%d", &num); //input a number
	if(num>2 && num<=1000000){
		if(num % 2==0){
			for(i=2;i<num/2;i++){ //i=1 will be error in prime()
			    prime1 = i;
				if(prime(prime1)){ //check prime1 is prime or not
					prime2 = num - prime1; //num = prime1 + prime2
					if(prime(prime2)){ //check prime2 is prime or not
					    printf("%d = %d + %d\n", num, prime1, prime2);
					    break; //one answer
					}
				}
		    }
		}
	    else printf("錯誤的輸入值\n");
	}
	else printf("錯誤的輸入值\n");
	return 0;
}
