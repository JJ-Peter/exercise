//判断4个整数中的最大值 
#include<stdio.h>
int main(void)
{
	int a, b, c, d, Largest, Smallest, m, n, x, y;
	printf("Enter four integers:(x x x x) ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m = a > b ? a : b;
	n = c > d ? c : d;
	Largest = m > n? m : n;
	x = a < b ? a : b;
	y = c < d ? c :	d;
	Smallest = x < y ? x : y;  
	printf("Largest: %d\nSmallest: %d\n",Largest,Smallest);
	return 0;
}
