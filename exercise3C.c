#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n)
{
	int divisor;
	if(n<=1)
		return 0;
	for(divisor=2;divisor*divisor<=n;divisor++)
		if(n%divisor == 0)
			return false;
	return true;                
}

int main()
{
	int even_number;
	scanf("%d",&even_number);
	if((even_number > 6) && (even_number%2 == 0)){
		int a=3;
		while(a<=(even_number/2)) {
			if(is_prime(a)&&is_prime(even_number-a))
				printf("%d %d\n", a, (even_number-a));
			a+=2;
		}
	}
	else
		printf("ERROR");
	return 0;
 } 
