#include<stdio.h>

int main(void)
{
	int nums[100];
	printf("4.\n");
	int i, num, record, count = 0;
	int k, j;
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
	/*
	for(i = 0; i < 100; i++)
	{
		search = nums[i];
		if(search == num[i+1])
		count++;
	}
	*/
	int output;
	for(i = 0; i < record + 1; i++)
    {
        count = 0; //count the appearance times of a number
        for(j = 0; j < record + 1; j++)
        {
            if(nums[i] == nums[j]) //find the same in the array
                count++;
        }
        if(count > (record + 1) / 2) //appear
        {
        	output = nums[i];
        }
    }
    printf("Output¡G%d", output);
	
	return 0;
}
