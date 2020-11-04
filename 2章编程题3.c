#include<stdio.h>
#define RITIO_OF_CIRCUMFERENCE_TO_DIAMETE 3.14
int main(void) 
{
	int r;
	float v; 
	printf("请输入球的半径r=");
	scanf("%d",&r);
	v = 4.0f/3.0f * RITIO_OF_CIRCUMFERENCE_TO_DIAMETE * r * r * r;
	printf("球的体积为%.1fm^3",v);
	return 0;
 } 	
