//对用户录入的产品信息格式化 
#include<stdio.h>
int main(void)  {
	int a, m, d, y;
	float b;
	printf("Enter item number: ");
	scanf("%d", &a);
	printf("Enter unit price: ");
	scanf("%f", &b);
	printf("Enter purchase date (mm/dd/yyyy)");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%-.2f\t\t%d%/%d/%d", a, b, m, d, y);
	return 0;
} 
