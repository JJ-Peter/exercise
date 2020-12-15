#include<stdio.h>
int main(void)
{
	int number,starting_day;
	printf("Enter number of days in month: ");
	scanf("%d",&number);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&starting_day);
	int i,t;
	for(i=0;i<starting_day-1;i++)
		printf("   ",i);         //将没有数字的地方设置为空格，每个日期占3个空 
	for(t=1;t<=number;t++){
		printf("%3d",t);
		if((starting_day-1+t)%7==0)    //每7个数换行 
		printf("\n");
	}
	return 0;
}
