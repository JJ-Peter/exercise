//快速排序的使用 
#include<stdio.h>

void quicksort(int a[],int low,int high);
int split(int a[],int low, int high);

int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m+n];
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	} 
	for(i=0;i<m;i++){
		c[i]=a[i];
	}
	for(i=m;i<m+n;i++){
		c[i]=b[i-m];
	}
	quicksort(c,0,m+n-1);
	for(i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
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
