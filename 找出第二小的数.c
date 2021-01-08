//第1行是一个整数n，表示随后有n组数据。每组数据占一行，第一个整数m(1<=m<=100)，表示随后有m个整数。
//对每组数据，输出第二小的数。如果第二小的数不存在，则输出ERROR。
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
