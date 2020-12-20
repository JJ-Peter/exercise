#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0){
	int l1, l2, l3;
	scanf("%d%d%d",&l1,&l2,&l3);
	if((l1+l2>l3)&&(l1+l3>l2)&&(l2+l3>l1)&&l1!=0&&l2!=0&&l3!=0){
	int a,b;
	if (l1 > l2){
        if (l1 > l3){
	        a = l1*l1;
			b = l2*l2 + l3*l3;
			}
		else{
		    a = l3*l3;
		    b = l1*l1 + l2*l2;
			}
		}
	else{
		if(l2 > l3){
			a = l2*l2;
			b = l1*l1 + l3*l3;
		}
		else{
			a = l3*l3;
			b = l1*l1 + l2*l2;
		} 
	}
	if(a==b)
		printf("Yes\n");
	else
		printf("No\n");
	}
	n--;
	}
	return 0;
}
