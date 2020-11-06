#include<stdio.h>
int main(void)
{
	float money, sum;    /*money是输入美元数量，sum是增加5%税率后的金额*/ 
	printf("Enter an amount:");
	scanf(" %f",&money);
	sum = money * 1.05;	
	printf("With tax added: $%.2f\n",sum);
	return 0; 
 } 
