#include<stdio.h>
//
int main(void){
	
	int num1, num2, ice, salt, price, price1, price2, cost;
	char temp, discount, correct = 'N';
	
	while(correct == 'N')
	{
	
		printf("�п�J�z�Q�I���D���G1.�~�� 2.�縥�� 3.�F�� 4.�q�j�Q��\n");
		scanf("%d", &num1);

		printf("�п�J�z�Q�I�������G1.���� 2.���� 3.�@��\n");
		scanf("%d", &num2);

		//choose black tea
		if(num2 == 1)
		{
			printf("�������B���G1.���` 2.�L�B 3.�h�B\n");
		    scanf("%d", &ice);
		}
	
		//choose french fries
		if(num2 == 2)
		{
			printf("�������Q�G1.���` 2.�h�Q\n");
			scanf("%d", &salt);
		}
		
		//discount//
		scanf("%c", &temp);
		printf("�аݬO�_���馩�X�H�Y���п�J�馩�X(e)�A�L�п�J(N)�I�I�I\n");
		scanf("%c", &discount);
		
		//list the order//
		printf("�бz���I�����H�U�G\n");
		//menu price list
		switch(num1)
		{
			case 1:
				printf("�~��x1\n");
				price1 = 60;
				break;
			case 2:
				printf("�縥��x1\n");
				price1 = 80;
				break;
			case 3:
				printf("�F��x1\n");
				price1 = 70;
				break;
			case 4:
				printf("�q�j�Q��x1\n");
				price1 = 90;
				break;
			default:
				price = 1000000;
				printf("�D�\��J���~�A�п�J���ļƦr(1~4)\n");
		}

		switch(num2)
		{
			case 1:
				printf("����");
				price2 = 30;
				if(ice == 1)
				{
					printf("���`�Bx1\n");
					break;
				}
				else if(ice == 2)
				{
					printf("�L�Bx1\n");
					break;
				}
				else if(ice == 3)
				{
					printf("�h�Bx1\n");
					break;
				}
				else
				{
					price = 1000000;
					printf("�����B�q��J���~�A�п�J���ļƦr(1~3)\n");
				}
				break;
			case 2:
				printf("����");
				price2 = 40;
				if(salt == 1)
				{
					printf("���`�Qx1\n");
					break;
				}
				else if(salt == 2)
				{
					printf("�h�Qx1\n");
					break;
				}
				else
				{
					price = 1000000;
					printf("�����Ы׿�J���~�A�п�J���ļƦr(1~3)\n");
				}
				break;
			case 3:
				printf("�@��x1\n");
				price2 = 40;
				break;
			default:
				price = 1000000;
				printf("���\��J���~�A�п�J���ļƦr(1~3)\n");
		}

		//cost//
		if(discount == 'e')
		{
			if((price1 + price2) > 99)
			{
				cost = (price1 + price2) * 0.8;
			}
			else
			{
				cost = price1 + price2;
			}
		}
		else if(discount == 'N')
		{
			cost = price1 + price2;
		}
		printf("\n�`���B���G%d��\n", cost);
		
		//correcy the order//
		scanf("%c", &temp);
		printf("�O�_���T�H(Y/N)\n");
		scanf("%c", &correct);
		if(correct == 'Y')
		{
			printf("���\\");
		}
		else if(correct != 'N')
		{
			printf("\n�Э��s��J\n");
		}
	
	}

	return 0;
}
