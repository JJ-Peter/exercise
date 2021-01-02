//判断字符串是否满足SCU或xSCUx，x为A.... 
#include<stdio.h>
#define N 101
int main()
{
	int n;
	scanf("%d",&n);
	if(n<10){
		while(n>0){
			char a[N]={0};            //将数组全初始化为0 
			scanf("%s",&a); 
			if(a[0]!='A'&&a[0]!='S'){
				printf("NO"); 
			}
			else if(a[0]=='S'){
					if(a[1]!='C'||a[2]!='U'){
						printf("NO");
					}
					else{
						if(a[3]==0){
							printf("YES");
						}
						else{
							printf("NO");
						}
					}
			}
			else if(a[0]=='A'){
				int t=0;
				while(a[t]=='A'){
					t++;
				}
				if(a[t]!='S'){
					printf("NO");				
				}
				else{
					if(a[t+1]!='C'||a[t+2]!='U'){
						printf("NO");
					}
					else{
						int s=0;
						while(a[t+3+s]=='A'){
							s++;
						}
						if(a[t+3+s]!=0){
							printf("NO");
						}
						else{
							if(t!=s){
								printf("NO");
							}
							else{
								printf("YES"); 
							}
						}
					}
				}
			}
			printf("\n");
			n--;
		}	
	} 
 } 
