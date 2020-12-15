//任意int型数的逆序 
#include<stdio.h> 
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	while(number>0){ 
		int sum = 0;
		do{
			sum = sum*10 + number%10;
			number /= 10;
		}while(number>0);
	printf("%d\n\n",sum);
	printf("Enter a number: ");
	scanf("%d",&number);
	}
	return 0;
}
