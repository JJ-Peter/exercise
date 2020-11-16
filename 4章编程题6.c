#include<stdio.h>
int main(void)
{
	int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&j1,&i1,&j2,&i2,&j3,&i3,&j4,&i4,&j5,&i5,&j6,&i6);
	int total = 3*(i1+i2+i3+i4+i5+i6)+(j1+j2+j3+j4+j5+j6);
	printf("Check digit: %d",9 -((total -1) %10));
	return 0;
 } 
