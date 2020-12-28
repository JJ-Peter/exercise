//分解质因数
#include<stdio.h>
int main()
{
    int k;
	scanf("%d",&k);
	while(k>0){
	    int n,i;
        scanf("%d",&n);
        	for(i=2;i<=n;i++){
            	while(n%i==0){
                	printf("%d",i);
                	n/=i;
                	if(n!=1) printf("*");
            	}
        	}                                          //如果数不能被2除尽，则数不能被2的倍数整除 
        	printf("\n");
        k--;
    }
        return 0;
}
