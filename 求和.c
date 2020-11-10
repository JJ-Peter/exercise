//Sums a series of numbers
#include<stdio.h>
int main(){
    int n, sum = 0;
	printf("This program sums a series of integers\nEnter integers (0 to terminate): ");
	scanf("%d",&n);
	sum = sum + n;
	while (n != 0){
	    scanf("%d",&n);
		sum =sum + n;
		printf("The sum is: %d\n",sum);}
    return 0;
}    
