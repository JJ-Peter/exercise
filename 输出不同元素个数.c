//����һ���������飬ͳ�Ʋ�ͬ��Ԫ�صĸ�����
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[30],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[30]={'\0'};
	b[0]=a[0];
	int j,flag=0,num=1;
	for(i=1;i<n;i++){
		flag=0;
		for(j=0;j<num;j++){
			if(a[i]==b[j]){
				flag=1;
				break;
			}				
		}
		if(flag!=1){
			b[num]=a[i];
			num++;	
		}
	}
	printf("%d\n",num);
	return 0;
 } 
