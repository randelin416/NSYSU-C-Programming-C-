#include<stdio.h>
#include<stdlib.h>
//find gcd and lcm of ywo numbers
int GCD(int num1, int num2)
{
	int remainder, gcd;
	/*
	//�P�_�j�p 
	if(num1 > num2)
		remainder = num1 % num2;
	else
		remainder = num2 % num1;
	
	while(remainder != 0)
	{
		num1 = num2;
		num2 = remainder;
		remainder = num1 % num2;	
	}
	return gcd = num2;
	*/
	while(num2 != 0)
	{
		remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
	}
	return gcd = num1;
}

int LCM(int num1, int num2)
{
	return (num1 * num2) / GCD(num1, num2);
}

int main()
{
	int num1, num2;
	printf("�п�J��ӼƦr�G");
	scanf("%d %d", &num1, &num2);
	int gcd = GCD(num1, num2);
	int lcm = LCM(num1, num2);
	printf("%d %d���̤j���]�Ƭ��G%d\n", num1, num2, gcd);
	printf("%d %d���̤p�����Ƭ��G%d", num1, num2, lcm);
}
