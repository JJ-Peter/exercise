#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter a three-digit number: ");
	scanf("%d",&a);
	int b, c, d;
	b = a / 100;
	c = (a - b*100) / 10;
	d = a % (b*100+c*10);
	printf("The reversal is: %d%d%d",d,c,b);
	return 0;
} 
