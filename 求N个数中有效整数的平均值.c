//计算N个数中有效整数的平均值
#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[100][N];
	int b[100]={0};
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int num=n;
	for(i=0;i<n;i++){
		if(strcmp(a[i],"n/a")==0){
			num--;
		}
	}
	if(num==0){
		printf("n/a");
	}
	else{
		int j;
		for(i=0;i<n;i++){
			if(strcmp(a[i],"n/a")==0){
				continue;
			}
			else if(a[i][0]=='-'){
				for(j=1;j<strlen(a[i]);j++){
					b[i]=b[i]*10+a[i][j]-'0';
					b[i]=-b[i];
				}
			}
			else{
				for(j=0;j<strlen(a[i]);j++){
					b[i]=b[i]*10+a[i][j]-'0';
				}
			}
		}
		double sum=0;
		for(i=0;i<n;i++){
			sum=sum+b[i]; 
 		} 
 		printf("%.2f",sum/num);
	}
 	return 0;
} 
