//��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У���һ������m(1<=m<=100)����ʾ�����m��������
//��ÿ�����ݣ�����ڶ�С����������ڶ�С���������ڣ������ERROR��
#include<stdio.h>
#include<stdbool.h>
int split(int a[],int low, int high);
void quicksort(int a[],int low,int high);
bool equal(int a[],int m);
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0){
		int m;
		scanf("%d",&m);
		int i=0,a[m];
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		if(m==1){
			printf("ERROR");
		}
		else{
			if(!equal(a,m)){	
				quicksort(a,0,m-1);
				int t=0;
				while(a[t]==a[t+1]){
					t++;
				}
				printf("%d",a[t+1]);
			}
			else{
				printf("ERROR");
			}
		}
		printf("\n");
		n--;
	}
 } 
 
int split(int a[],int low, int high)
{
	int part_element=a[low];
	for(;;){
		while(low<high&&part_element<=a[high])
		high--;
		if(low>=high) break;
		a[low++]=a[high];
		while(low<high&&a[low]<=part_element)
			low++;
		if(low>=high) break;
		a[high--]=a[low];
	} 
	a[high]=part_element;
	return high;
}

 void quicksort(int a[],int low,int high)
{
	int middle;
	if(low>=high) 
		return;
	middle = split(a,low,high);
	quicksort(a,low,middle-1);
	quicksort(a,middle+1,high);
}

 bool equal(int a[],int m)
{
	int i;
	for(i=0;i<m-1;i++){
		if(a[i]!=a[i+1]){
			return false;
		}
	}
	return true;
 }
