#include<stdio.h>
int main(void)
{
	float money, sum;    /*money��������Ԫ������sum������5%˰�ʺ�Ľ��*/ 
	printf("Enter an amount:");
	scanf(" %f",&money);
	sum = money * 1.05;	
	printf("With tax added: $%.2f\n",sum);
	return 0; 
 } 
