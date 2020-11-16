#include<stdio.h>
int main(void)
{
	int hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%d£º%d",&hour, &minute); 
	if(hour<=11)
	    printf("Equivelent 12-hour time: %.2d:%.2d   AM\n",hour, minute);
	else if(hour==12 && minute==00)
        printf("Equivelent 12-hour time: %.2d:%.2d   AM\n",hour, minute);
	else if(hour>12 && hour<=24)
	    printf("Equivelent 12-hour time: %.2d:%.2d   PM\n",hour - 12, minute);
    else
        printf("wrong");
    return 0;
 }  
