#include<stdio.h>
int main()
{
	while (1){
	
	int grade;
	printf("Enter numerical grade: ");
	scanf("%d",&grade);
	printf("Letter grade: ");
	if (grade < 0 ||grade > 100){
		printf("False");
	return 0;
	}
	switch (grade / 10)  {
		case 10:case 9:printf("A\n");break;
		case 8: printf("B\n");break;
		case 7: printf("C\n");break;
		case 6: printf("D\n");break;
		case 5:case 4:case 3:case 2:case 1:case 0:printf("F\n");break;
	}}
 } 
