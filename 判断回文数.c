//�������������ж϶����Ƿ�������ж��Ƿ��ǻ����� 
#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num>0){
		int m,t,digit,sum=0;
		scanf("%d",&m);
		t=m;
		if (t>0){
			while(t>0){
				digit=t%10;
				sum=sum*10+digit;
				t/=10;                             
			}		
			if(sum==m)
				printf("yes\n");
			else
				printf("no\n");
		}
		num--;
	} 
 } 
