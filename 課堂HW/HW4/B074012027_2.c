#include<stdio.h>
//input a number and plus each number togrther until it between 0~9
int main(void)
{
	int num, sum;
	printf("請輸入一正整數：");
	scanf("%d", &num);
	int temp = num; //set a temp
	if(num>=0 && num<=2000000000)
	{
		//if input < 10 just print it out
		if(num<10)
		{
			printf("%d", num);
		}
		//if input > 10, sum each number
		else
		{
			while(temp>9)
			{
				sum = 0; //reset the sum
				while(temp>0)
				{
					sum += temp%10;
		    		temp /= 10;
		    		//printf("%d...%d", sum, temp); //check
		    		//system("pause");
				}
				temp = sum; //loop again if temp > 9
		    }
			printf("%d", sum);
		}
	}
	else printf("錯誤的輸入值\n");
	return 0;
}
