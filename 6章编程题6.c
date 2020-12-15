#include<stdio.h>
int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	int N = number / 2;
	int a[N];
	int i= 2*N, t=0;
	if (number==2*N){
		for(i=2*N;i>0;){
			a[t] = i*i; 
			t++;
			i-=2;
		}
	}
	else
		for(i=2*N;i>0;){
			a[t] = i*i;
			t++;
			i-=2;
		}
	int x;
	for(x=N-1;x>=0;x--){
		printf("%d\n",a[x]);
	}
	return 0;
}       
