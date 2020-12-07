#include<stdio.h>
int main()
{
	int hour, minute, sum1;
	printf("Enter a 24-hour time: ");
	scanf("%2d£º%2d",&hour,&minute);
	sum1 = hour*60 + minute;
	int a[8]={480, 583, 679, 767, 840, 945, 1140, 1305};
	int i, k[8];
	int Min = 1440;
	for (i=0;i<8;i++){
		if(sum1 > a[i])
			k[i] = sum1 - a[i];
	    else
			k[i] = a[i] - sum1; 		
	Min = k[i] < Min ? k[i] : Min; 
	}
	int sum2;
	sum2 = Min + sum1;
	if(sum2==a[0])
		printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.");
	else if(sum2==a[1])
		printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.");
	else if(sum2==a[2])
		printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.");
	else if(sum2==a[3])
		printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.");
	else if(sum2==a[4])
		printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.");
	else if(sum2==a[5])
		printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.");
	else if(sum2==a[6])
		printf("Closet departure time is 7:00 p.m., arriving at 9:20 p.m.");
	else
		printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.");
	return 0;
 } 
