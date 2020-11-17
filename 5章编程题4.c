#include<stdio.h>
int main(void)
{
	float speed;
	printf("Enter the speed of wind: "); 
	scanf("%f",&speed);
	printf("The grade of wind is ");
	if (speed < 1.0f)
	    printf("Calm");
	else if (speed < 3.0f)
		printf("Light air");
	else if (speed <27.0f)
		printf("Breeze");
	else if (speed < 47.0f)
		printf("Gale");
	else if (speed < 63.0f)
		printf("Storm");
	else
		printf("Hurricane");
	return 0;		
}

