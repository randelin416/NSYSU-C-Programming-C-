#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//mid2 pm

int main()
{
	int i, j, k;
	FILE *fp_r;
	fp_r = fopen("3.txt", "r");
	if((fp_r = fopen("3.txt", "r")) == NULL)
		printf("Cannot Open File!\n");
	else
	{
		for(k = 0; k < 3; k++)
		{
			int nums1[100], nums2[100];
			int len1 = 0, len2 = 0;
			for(i = 0; i < 100; i++)
			{
				fscanf(fp_r, "%d", &nums1[i]);
				if(nums1[i] == -1)
					break;
				else
				{
					//printf("%3d", nums1[i]);
					len1++;
				}
			}
			//printf("\n");
			
			for(i = 0; i < 100; i++)
			{
				fscanf(fp_r, "%d", &nums2[i]);
				if(nums2[i] == -1)
					break;
				else
				{
					//printf("%3d", nums2[i]);
					len2++;
				}
			}
			//printf("\n");
			
			for(i = 0; i < len1; i++)
			{
				for(j = 0; j < len2; j++)
				{
					if(nums1[i] == nums2[j])
					{
						int a;
						if(nums1[i] != a && nums1[i] != -1)
						{
							a = nums1[i];
							printf("%3d", a);
						}
					}
				}
			}
			printf("\n");
			
		}
		
		
	}
	
	fclose(fp_r);
	return 0;
}
