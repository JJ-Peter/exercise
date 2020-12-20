//输入5个数，只能判断等比，等差，斐波拉契数列 
#include<stdio.h>
#define N 9
int main()
{
	long int i=0,a[N];
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
		}
	while(a[0]!=0 && a[1]!=0 && a[2]!=0 && a[3]!=0 && a[4]!=0){
	if(2*a[1]==a[0]+a[2] && 2*a[2]==a[1]+a[3] && 2*a[3]==a[2]+a[4]){
		printf("case one\n");
		for(i=5;i<=N;i++){
		a[i]=a[4]+(i-4)*(a[2]-a[1]);
		printf("%d ",a[i]);}
		printf("\n");
		}
	if(a[1]*a[1]==a[0]*a[2] && a[2]*a[2]==a[1]*a[3] && a[3]*a[3]==a[4]*a[2]){
		printf("case two\n");
		for(i=5;i<=N;i++){
		a[i]=a[i-1]*(a[4]/a[3]);
		printf("%d ",a[i]);}
		printf("\n");
		}
	if(a[2]==a[1]+a[0] && a[3]==a[1]+a[2] && a[4]==a[3]+a[2]){ 
		printf("case three\n");
		for(i=5;i<=N;i++){
		a[i]=a[i-1]+a[i-2];
		printf("%d ",a[i]);}
		printf("\n");
		}
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
		}
	}
	return 0;
}
