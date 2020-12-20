#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int i, a[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		}
	int b[m];
	while(i>=0){
		if(a[i]>=0)
			b[i]=a[i];
		else
			b[i]=0-a[i];
		i--;
	}
	int max=0;
	while(i<m){
		max=b[i]>max?b[i]:max;
		i++;
	}
	while(i>=0){
		if(b[i]==max){
			printf("%d",a[i]);
			break;
			}
		else
		 	i--;
		}
	return 0;
}
