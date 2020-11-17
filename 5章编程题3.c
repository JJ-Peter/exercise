//broker2.c 
#include<stdio.h>
int main(void)
{
	int quantity;
	float price, value, commission, competitor;
	printf("Enter the quantity of stock: ");
	scanf("%d", &quantity);
	printf("Enter the price of stock: ");
	scanf("%f",&price);
	value = quantity * price;
	if (value < 2500.00f)
	    commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
	    commission = 56.00f + .066f * value;
	else if (value < 20000.00f)
	    commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else 
		commission = 255.00f + .0009f * value;
	
	if (commission < 39.00f)
		commission = 39.00f;
		
	printf("Commission: $%.2f\n",commission);
	
	if (quantity < 2000)
		competitor = 33.00f * quantity + 0.03f;
	else 
	    competitor = 33.00f * quantity + 0.02f;
		
	printf("Commission of competitor:  $%.2f",competitor);
	return 0; 
 } 
