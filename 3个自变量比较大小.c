#include<stdio.h>
int main(void)
{
   int i, j, k, max;
   printf("Enter the value of i:");
   scanf("%d",&i);
   printf("Enter the value of j:");
   scanf("%d",&j);
   printf("Enter the value of k:");
   scanf("%d",&k);
   if (i > j){
        if (i > k)
	        max = i;
		else
		    max	= k;}
	else{if(j > k)
	max = j;
	else
	max = k;
	} 
	printf("max =%d",max);
	return 0;
}
