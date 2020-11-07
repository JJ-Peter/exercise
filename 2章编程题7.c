#include<stdio.h>
int main()  
{
	int money, a;
	printf("Enter a dollar amount: ");
	scanf("%d", &money);	
	a = money / 20;	
	printf("$20 bills: %d\n", a);
	int b = (money - a*20) / 10;
	printf("$10 bills: %d\n", b);
	int c = (money - a*20 - b*10) / 5;
	printf("$5 bills: %d\n", c);
	int d = money - a*20 - b*10 - c*5;
	printf("$1 bills: %d\n", d);
	return 0;
 } 
