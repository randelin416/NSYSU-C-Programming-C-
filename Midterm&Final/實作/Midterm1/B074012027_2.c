#include<stdio.h>

int main(void)
{
	//input an array
	int nums[100];
	printf("2.\n");
	int i, j, num, record, count;
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
	
	/*//(check the array)
	for(i = 0; i < record + 1; i++)
	{
		printf("%d ", nums[i]);
	}
	*/
	
	printf("Output¡G");
	
	for(i = 0; i < record + 1; i++)
    {
        count = 0; //count the appearance times of a number
        for(j = 0; j < record + 1; j++)
        {
            if(nums[i] == nums[j]) //find the same in the array
                count++;
        }
        if(count == 1) //only appear once
        {
        printf("%d ",nums[i]);
        }
    }
	

	
	
	return 0;
}
