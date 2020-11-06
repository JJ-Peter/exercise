#include<stdio.h>
int main(void)
{
	int x;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	int y ;
	y = 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6;
	printf("3x^5+2x^4-5x^3-x^2+7x-6=%d",y);
	return 0;
 } 
