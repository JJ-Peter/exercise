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
		printf("   ",i);         //��û�����ֵĵط�����Ϊ�ո�ÿ������ռ3���� 
	for(t=1;t<=number;t++){
		printf("%3d",t);
		if((starting_day-1+t)%7==0)    //ÿ7�������� 
		printf("\n");
	}
	return 0;
}
