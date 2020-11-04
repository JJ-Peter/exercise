//计算半径为10的球的体积
#include<stdio.h>
#define RITIO_OF_CIRCUMFERENCE_TO_DIAMETE 3.14
int main(void) 
{
	int r = 10;
	float v;
	v = 4.0f/3.0f * RITIO_OF_CIRCUMFERENCE_TO_DIAMETE * r * r * r; 
	printf("ÇòµÄÌå»ýÎª%.1fm^3",v);
	return 0;
 } 	
