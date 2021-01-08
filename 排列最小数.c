//给定0-9数字各若干个，以任意顺序排列这些数字，使得最后得到的数尽可能小
//输入的数按顺序表示0~9的个数 ，至少有一个非0数 
#include<stdio.h>
int main()
{
	int a[10],i,k;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);
			a[i]--;
			break;
		}
	}
	for(i=0;i<10;i++){
		while(a[i]!=0){
			printf("%d",i);
			a[i]--;
		}
	}
	printf("\n");
	return 0;
}
