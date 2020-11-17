#include<stdio.h>
int main(void)
{
	float income, taxes;
	printf("Enter the income: ");
	scanf("%f",&income);
	
	if (income < 750.00f)
		taxes = .01 * income;
	else if (income < 2250.00f)
		taxes = .02 * (income - 750.00f) + 7.50f;
	else if (income < 3750.00f)
		taxes = .03 * (income - 2250.00f) + 37.50f;
	else if (income < 5250.00f)
		taxes = .04 * (income - 3750.00f) + 82.50f;
	else if (income < 7000.00f)
		taxes = .05 * (income - 5250.00f) + 142.50f;
	else
		taxes = .06 * (income - 7000.00f) + 230.00f;
	
	printf("The taxes are: %.2f\n",taxes);
	return 0;
}
