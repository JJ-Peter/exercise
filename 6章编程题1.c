//������������������ʾ�������,����С�ڻ����0ʱ������� 
#include<stdio.h>
int main()
{
	printf("Hello!\nYou are supposed to enter a number( > 0 )\nIf your number <= 0, the largest number will be shown\n\n");
	float x, k;
	k = 0;	
	do{
	printf("Enter a number: ");
	scanf("%f",&x);	
	k =	x > k ? x : k;
	}while(x>0);
	printf("The largest number entered was %g\n",k);
	return 0;
}
