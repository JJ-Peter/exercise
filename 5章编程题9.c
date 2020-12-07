#include<stdio.h>
int main()
{
	int year1, year2, month1, month2, day1, day2;
	printf("Enter first date (yy/mm/dd):");
	scanf("%d/%d/%d",&year1,&month1,&day1);
	printf("Enter second date (yy/mm/dd)");
	scanf("%d/%d/%d",&year2,&month2,&day2);
	if(year1>year2)
		printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year2,month2, day2,year1,month1,day1);
	else if(year1<year2)
		printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year1,month1,day1,year2,month2, day2);
	else 
		if(month1>month2)
			printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year2,month2, day2,year1,month1,day1);
		else if(month1<month2)
			printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year1,month1,day1,year2,month2, day2);    
		else
			if(day1>day2)
				printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year2,month2, day2,year1,month1,day1);
			else
				printf("%.2d/%d/%d is earlier than %.2d/%d/%d",year1,month1,day1,year2,month2, day2);
}
