//������������ֺͷ���������Ӧ����״ͼ��ʾ��
#include<stdio.h>
int main()
{
	char display[31][20];
	int digit[20];
	char letter[20]; 
	int i,j,m;
	scanf("%d",&m);
	if(m>=1&&m<=20){
	for(i=0;i<m;i++){
		scanf("%d",&digit[i]);
		scanf("%c",&letter[i]);   
	} 								//�ֱ��ַ���������һά���� 
	int above=0, below=0;
	for(i=0;i<m;i++){
		if(digit[i]<0&&below<(-digit[i]))
			below = -digit[i];
		else if(digit[i]>0&&above<digit[i])
			above = digit[i];
	}                               //�����x�����¸��м��� 
	
	int row = 1+above+below;                       
	for(j=0;j<m;j++){            //�� 
		if(digit[j]>0){		
			for(i=0;i<row;i++)
				if (i<above-digit[j])		
					display[i][j]=' ';
				else if (i<above&&i>=above-digit[j]){
					if(letter[j]==' '||letter[j]=='\n')
						display[i][j]='+';
					else
						display[i][j]=letter[j];
				}
				else if(i==above)
					display[i][j]='-';
				else
					display[i][j]=' ';
		}		
		else {
			for(i=0;i<row;i++)
				if (i<above)		
					display[i][j]=' ';
				else if(i==above)
					display[i][j]='-';
				else if (i>above&&i<above-digit[j]+1){
					if(letter[j]==' '||letter[j]=='\n')
						display[i][j]='+';
					else
						display[i][j]=letter[j];
				}
				else
					display[i][j]=' ';
		}
	}								//����ÿ��ÿ��
	
			                                          
	for(i=0;i<row;i++){
		if(i==above){
			for(j=0;j<m;j++){
				if(j==0)
					printf("%c",display[i][j]);
				else
					printf("%c-",display[i][j]);
				}
			}
		else{
			for(j=0;j<m;j++){
				if(j==0)
					printf("%c",display[i][j]);
				else
					printf(" %c",display[i][j]);
				}
			}
		printf("\n");
		}       			//��ӡ������ͼ�� 
	return 0;
	}
 }                        
