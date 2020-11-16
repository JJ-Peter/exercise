//假设输入的数不超过4位，判断数的位数。 
#include<stdio.h>
int main(void)
{
	int x, i;
	printf("Enter a number: ");
	scanf("%d",&x);	
	if (x>=1&&x<10)
	    i=1; 
	else if (x>=10&&x<100)
	    i=2;
    else if (x>=100&&x<1000)
        i=3;
    else if (x>=1000&&x<10000)
        i=4;
    printf("The number %d has %d digits",x,i);
    return 0;
 } 
