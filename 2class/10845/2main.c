#include <stdio.h>

int main()
{
	int n;//number of order count
	scanf("%d",&n);//scan order count number
	int i,j;//for use 'for' function
	int tmp;//int for sum character from order
	int cnt=0;//counting number of stack
	int rcnt=0;//counting number of Q
	int c[10001];//array for print
	int pcnt=0;//counting number for array for print
	char a[10];//string for order
	int b[10001]={0};//array for stack&Q
	for(i=0;i<n;i++){//use 'for' function to repeat
		scanf("%s",a);//scan string a
		tmp=0;//initialization tmp to 0
		for(j=0;j<10;j++){//sum character to tmp
			if(a[j]=='\0'){
				break;
			}
			else{
				tmp+=a[j];
			}
		}
		switch(tmp){
			case 448 :
				//this is push
				scanf("%d",&b[cnt]);
				cnt++;
				break;
			case 335 :
				//this is pop
				if(b[rcnt]!=0){
					c[pcnt]=b[rcnt];
					rcnt++;
				}
				else{
					c[pcnt]=-1;
				}
				pcnt++;
				break;
			case 443 :
				//this is size
				c[pcnt]=cnt-rcnt;
				pcnt++;
				break;
			case 559 :
				//this is empty
				if(b[rcnt]!=0){
					c[pcnt]=0;
				}
				else{
					c[pcnt]=1;
				}
				pcnt++;
				break;
			case 553 :
				//this is front
				if(b[rcnt]!=0){
					c[pcnt]=b[rcnt];
				}
				else{
					c[pcnt]=-1;
				}
				pcnt++;
				break;
			case 401 :
				//this is back
				if(b[cnt-1]!=0){
					c[pcnt]=b[cnt-1];
				}
				else{
					c[pcnt]=-1;
				}
				pcnt++;
				break;
		}
	}
	for(i=0;i<pcnt;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}


