#include<stdio.h>
#define RITIO_OF_CIRCUMFERENCE_TO_DIAMETE 3.14
int main(void) 
{
	int r;
	float v; 
	printf("��������İ뾶r=");
	scanf("%d",&r);
	v = 4.0f/3.0f * RITIO_OF_CIRCUMFERENCE_TO_DIAMETE * r * r * r;
	printf("������Ϊ%.1fm^3",v);
	return 0;
 } 	
