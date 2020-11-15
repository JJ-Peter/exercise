#include<stdio.h>
int main(void)
{
	int a;
	printf("Entera two-digit number: ");
	scanf("%d",&a);
	int b, c;
	b = a / 10;
	c = a % 10;
	printf("The reversal is: %d%d",c,b);
	return 0;
} 
