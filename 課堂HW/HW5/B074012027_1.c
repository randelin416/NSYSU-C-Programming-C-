#include<stdio.h>
//
int main(void){
	
	int num1, num2, ice, salt, price, price1, price2, cost;
	char temp, discount, correct = 'N';
	
	while(correct == 'N')
	{
	
		printf("請輸入您想點的主食：1.漢堡 2.潛艇堡 3.沙拉 4.義大利麵\n");
		scanf("%d", &num1);

		printf("請輸入您想點的附食：1.紅茶 2.薯條 3.濃湯\n");
		scanf("%d", &num2);

		//choose black tea
		if(num2 == 1)
		{
			printf("紅茶的冰塊：1.正常 2.微冰 3.去冰\n");
		    scanf("%d", &ice);
		}
	
		//choose french fries
		if(num2 == 2)
		{
			printf("薯條的鹽：1.正常 2.去鹽\n");
			scanf("%d", &salt);
		}
		
		//discount//
		scanf("%c", &temp);
		printf("請問是否有折扣碼？若有請輸入折扣碼(e)，無請輸入(N)！！！\n");
		scanf("%c", &discount);
		
		//list the order//
		printf("請您所點的為以下：\n");
		//menu price list
		switch(num1)
		{
			case 1:
				printf("漢堡x1\n");
				price1 = 60;
				break;
			case 2:
				printf("潛艇堡x1\n");
				price1 = 80;
				break;
			case 3:
				printf("沙拉x1\n");
				price1 = 70;
				break;
			case 4:
				printf("義大利麵x1\n");
				price1 = 90;
				break;
			default:
				price = 1000000;
				printf("主餐輸入錯誤，請輸入有效數字(1~4)\n");
		}

		switch(num2)
		{
			case 1:
				printf("紅茶");
				price2 = 30;
				if(ice == 1)
				{
					printf("正常冰x1\n");
					break;
				}
				else if(ice == 2)
				{
					printf("微冰x1\n");
					break;
				}
				else if(ice == 3)
				{
					printf("去冰x1\n");
					break;
				}
				else
				{
					price = 1000000;
					printf("紅茶冰量輸入錯誤，請輸入有效數字(1~3)\n");
				}
				break;
			case 2:
				printf("薯條");
				price2 = 40;
				if(salt == 1)
				{
					printf("正常鹽x1\n");
					break;
				}
				else if(salt == 2)
				{
					printf("去鹽x1\n");
					break;
				}
				else
				{
					price = 1000000;
					printf("薯條鹹度輸入錯誤，請輸入有效數字(1~3)\n");
				}
				break;
			case 3:
				printf("濃湯x1\n");
				price2 = 40;
				break;
			default:
				price = 1000000;
				printf("附餐輸入錯誤，請輸入有效數字(1~3)\n");
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
		printf("\n總金額為：%d元\n", cost);
		
		//correcy the order//
		scanf("%c", &temp);
		printf("是否正確？(Y/N)\n");
		scanf("%c", &correct);
		if(correct == 'Y')
		{
			printf("成功\");
		}
		else if(correct != 'N')
		{
			printf("\n請重新輸入\n");
		}
	
	}

	return 0;
}
