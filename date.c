#include<stdio.h>
int main(void)
{
	int day, month, year;
	int i,count_day=0,p,weekdate;
	
    printf("Enter date (dd/mm/yy):");
	scanf("%d /%d /%d", &day, &month, &year );
	
	printf("Dated this %d",day); 
	switch(day) {
		case 1 : case 21 : case 31 :
			printf("st"); break;
		case 2 : case 22 :
			printf("nd"); break;
		case 3 : case 23 :
			printf("rd"); break;
		default: printf("th"); break;
	}
	printf(" day of ");
	
	switch (month)   {
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("Augest"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
	
	}
	printf(", 20%d\n",year);
	
	printf("今天是星期");
	if(year<=20)
	{
		for(i=year;i<20;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0)
				count_day+=366;
			else
				count_day+=365;
		}
		for(i=month;i<12;i++)
		{
			if((i%2==1&&i<=7)||(i%2==0&&i>=8))
				count_day+=31;
			else if(i==2)
				count_day+=29;
			else if((i%2==0&&i<=7)||(i%2==1&&i>=8))
				count_day+=30;
		}
		
		count_day+=31-day;
		p=count_day%7;
		if(4-p<=0)
			weekdate=4-p+7;
		else
			weekdate=4-p; 
	}
	else
	{
		for(i=year;i>21;i--)
		{
			if(i%4==0&&i%100!=0||i%400==0)
				count_day+=366;
			else
				count_day+=365;
		}
		for(i=1;i<month;i++)
		{
			if((i%2==1&&i<=7)||i==8||i==10)
				count_day+=31;
			else if(i==2)
				count_day+=28;
			else if((i%2==0&&i<=7)||i==9)
				count_day+=30;
		}
		count_day+=day;
		p=count_day%7;
		if(4+p>7)
			weekdate=4+p-7;
		else
			weekdate=4+p; 
	}
	printf("%d",weekdate);
	
	return 0;
 } 
