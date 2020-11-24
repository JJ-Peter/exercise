//一维数组的应用 
#include<stdio.h>
#define N 10    /* You can define N = every number*/
int main(void)
{
	int a[N], i;
	printf("Enter %d numbers:",N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	printf("In reverse order: ");
	for(i=N-1;i>=0;i--){
		printf("%d ",a[i]);    /*put a blank after %d to implement the blank between two output*/
	}
	return 0;
 } 
