#include<stdio.h>
int main()  {  /*复合语句要加花括号*/ 
	int i = 10;
	while(i > 0){
		printf("T minus %d and counting\n", i--); 	}/*也可以将i--放在printf外 */ 
} 
