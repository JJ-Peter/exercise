//����0-9���ָ����ɸ���������˳��������Щ���֣�ʹ�����õ�����������С
//���������˳���ʾ0~9�ĸ��� ��������һ����0�� 
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
