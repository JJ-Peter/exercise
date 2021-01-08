//读入n名学生的姓名、身份证号、成绩，分别输出成绩最高和成绩最低学生的姓名和身份证号。注意：学生名单中可能缺考，没有成绩，表示为n/a.
#include<stdio.h>
#include<string.h>
int main()
{
	struct stu{
		char name[11];
		char id[19];
		char ch[4];
		int score;
	}stu[100];
	int i,n,j,k;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%s",stu[i].name);
		scanf("%s",stu[i].id);
		scanf("%s",stu[i].ch);
	}
	for(i=0;i<n;i++){
		stu[i].score=0;
	}
	for(i=0;i<n;i++){
		if(strcmp(stu[i].ch,"n/a")==0){
			stu[i].score=-1;
		}
		else{
			for(j=0;j<strlen(stu[i].ch);j++){
				stu[i].score=stu[i].score*10+stu[i].ch[j]-'0';
			}
		}
	}
	int max,min;
	for(i=0;i<n;i++){
		if(stu[i].score!=-1){
			max=stu[i].score;
			min=stu[i].score;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(stu[i].score!=-1){
			if(stu[i].score>max){
				max=stu[i].score;
			}
			if(stu[i].score<min){
				min=stu[i].score;
			}
		}
	}
	int high[100],low[100];
	j=0;
	k=0;
	for(i=0;i<n;i++){
		if(max==stu[i].score){
			high[j]=i;
			j++;
		}
		if(min==stu[i].score){
			low[k]=i;
			k++;
		}
	}
	int output1=high[0],output2=low[0];
	for(i=0;i<j;i++){
		if(strcmp(stu[high[i]].name,stu[output1].name)<0){
			output1=high[i];
		}
	}
	for(i=0;i<k;i++){
		if(strcmp(stu[low[i]].name,stu[output2].name)>0){
			output2=low[i];
		}
	}
	printf("%s %s\n",stu[output1].name,stu[output1].id);
	printf("%s %s\n",stu[output2].name,stu[output2].id);
	return 0;
}
