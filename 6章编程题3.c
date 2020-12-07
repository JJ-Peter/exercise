#include<stdio.h>
int main()
{
	int a, b, m, n, remainder;
	printf("Enter a fraction: ");
	scanf("%d/%d",&a,&b);
	m = a;
	n = b;
	while(n!=0){
		remainder = m % n;
		m = n; 
		n = remainder;
	}
	printf("In loweset terms: %d/%d",a/m,b/m);
	return 0;
}
