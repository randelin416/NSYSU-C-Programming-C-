#include<stdio.h>

int main(void)
{
	int nums[100];
	printf("5.\n");
	int i, num, record, count = 0;
	printf("Input¡G");
	for(i = 0; i < 100; i++)
	{
		scanf("%d", &num);
		if(num == -1)
			break;
		else
		{
			nums[i] = num;
			record = i;
		}
	}
	/*(check the array)
	for(i = 0; i < record + 1; i++)
	{
		printf("%d ", nums[i]);
	}
	*/
	
	//put 0 to the end
	
	int j;
	int  l = len(nums);
 	int zero_num = 0;  
   	for(i = 0; i < record; i++)
       	if(num == 0)
       		{
       		zero_num += 1;
           	continue;
		   	}

       	nums[i-zero_num] = num;

   for(j = l-zero_num; j >= 1; j--)
       nums[j] = 0;
	
	return 0;
}
