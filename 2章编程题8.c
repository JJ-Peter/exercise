#include<stdio.h>
int main(void)
{
	float a, b, c;
	printf("Enter amount of loan: ");
	scanf("%f", &a);
	printf("Enter interest rate: ");
	scanf("%f", &b);
	printf("Enter monthly payment: ");
	scanf("%f", &c);
	float first, second, third;
	first = a*( 1 + b / 100 / 12) - c;
	second = ( first*( 1 + b / 100 / 12) - c);
	third = ( second*(1 + b / 100 / 12) - c);
	printf("\nBalance remianing after first payment: $%.2f\n",first);
	printf("Balance remianing after second payment: $%.2f\n",second);
	printf("Balance remianing after third payment: $%.2f\n",third);
	return 0;
}
