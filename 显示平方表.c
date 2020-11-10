//显示平方表 
#include<stdio.h>
int main(){
	int i, n;
	printf("This program prints a table of squares.\nEnter number of entires in table:");
	scanf("%d",&n);
	
	i = 1;
	while (i <= n){
		printf("\t%d\t%d\n",i,i*i);
		i++;
	} 
return 0;
} 
