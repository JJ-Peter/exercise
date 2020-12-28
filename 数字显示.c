//数字的点阵显示* 
#include<stdio.h>
#define N 4
int main()
{
	char digit0[7][5],digit1[7][5],digit2[7][5],digit3[7][5],digit4[7][5],digit5[7][5],digit6[7][5],digit7[7][5],digit8[7][5],digit9[7][5];
	int x,y;	
	for(y=0;y<7;y++){
		for(x=0;x<5;x++){
			digit0[y][x]=' ';
			digit1[y][x]=' ';
			digit2[y][x]=' ';
			digit3[y][x]=' ';
			digit4[y][x]=' ';
			digit5[y][x]=' ';
			digit6[y][x]=' ';
			digit7[y][x]=' ';
			digit8[y][x]=' ';
			digit9[y][x]=' ';
		}
	}
	for(x=0;x<5;x++){
		digit0[0][x]='*';
		digit0[6][x]='*';
		digit2[3][x]='*';
		digit2[0][x]='*';
		digit2[6][x]='*';
		digit3[0][x]='*';
		digit3[3][x]='*';
		digit3[6][x]='*';
		digit4[3][x]='*';
		digit5[0][x]='*';
		digit5[3][x]='*';
		digit5[6][x]='*';
		digit6[0][x]='*';
		digit6[3][x]='*';
		digit6[6][x]='*';
		digit7[0][x]='*';
		digit8[0][x]='*';
		digit8[3][x]='*';
		digit8[6][x]='*';		
		digit9[0][x]='*';
		digit9[3][x]='*';
		digit9[6][x]='*';
	}
	for(y=0;y<7;y++){
		digit0[y][0]='*';
		digit0[y][4]='*';
		digit1[y][4]='*';
		digit3[y][4]='*';
		digit4[y][4]='*';
		digit6[y][0]='*';
		digit7[y][4]='*';
		digit8[y][0]='*';
		digit8[y][4]='*';
		digit9[y][4]='*';
	} 
	for(y=0;y<4;y++){
		digit2[y][4]='*';
		digit4[y][0]='*';
		digit5[y][0]='*';
		digit9[y][0]='*';	
	}
	for(y=4;y<7;y++){
		digit2[y][0]='*';
		digit5[y][4]='*';
		digit6[y][4]='*';	
	}
	int k;
	scanf("%d",&k);
	while(k>0){
		int n,t,digit[N],bit=0,i=0;
		scanf("%d",&n);
		printf("%d:\n",n);
		t=n;
		while(t>0){
			digit[bit]=t%10;
			t /= 10;
			bit++;
		}
		char ch[7][7*bit-2];
		for(y=0;y<7;y++){
			for(x=0;x<7*bit-2;x++){
				ch[y][x]=' ';
			}
		}
		int m=0;
		for(i=bit-1;i>=0;i--){
			if(m<bit){
					if(digit[i]==0){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit0[y][x-7*m];
							}
						}
					}else if(digit[i]==1){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit1[y][x-7*m];
							}
						}
					}else if(digit[i]==2){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit2[y][x-7*m];
							}
						}
					}else if(digit[i]==3){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit3[y][x-7*m];
							}
						}
					}else if(digit[i]==4){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit4[y][x-7*m];
							}
						}
					}else if(digit[i]==5){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit5[y][x-7*m];
							}
						}
					}else if(digit[i]==6){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit6[y][x-7*m];
							}
						}
					}else if(digit[i]==7){
						for(y=0;y<7;y++){ 
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit7[y][x-7*m];
							}
						}
					}else if(digit[i]==8){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit8[y][x-7*m];
							}
						}
					}else if(digit[i]==9){
						for(y=0;y<7;y++){
							for(x=7*m;x<7*(m+1)-2;x++){
								ch[y][x]=digit9[y][x-7*m];
							}
						}
					}
			}
			m++;
		}
		for(y=0;y<7;y++){
			for(x=0;x<7*bit-2;x++){
				printf("%c",ch[y][x]);
			}
			printf("\n");
		}
		k--;
	}
	return 0;
 } 
