//number one
/*Author:Jj-Peter
Date:2020.10.13*/
#include <stdio.h>    //Direction没有分号,#区分c语言和其他语言 


int main(void)     //int表示输出整数值，main是主函数，void表示main函数没有参数 
{
	printf("To C, or not to C：that is the question.\n");  
	printf("To C, or not to C:\n that is the question.\n");     // \n为换行符，句末要用分号；，
    
    
    
	printf("To C, or not to C：");
	printf("that is the question.\n");      //若没有 \n，则编译运行时不提行。 



	printf("To C, or not to C：that is the question.\n");     //空白行对于编译运行时没有影响。 
	printf("To C, or not to C：that is the question.");     
	
	printf("To C, or not to C:\nn that is the question.\n");     //避免 \nn类似的错误 
	  
	  
    printf("Bravity is the soul of wit.--Shakespeare\n ");
    printf("Bravity is the soul of wit.\n    --Shakespeare\n");
}
