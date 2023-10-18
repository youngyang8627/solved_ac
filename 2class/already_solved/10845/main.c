#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i=0,j;
	char a[11];
	int b[10001]={0};
	int tmp;
	int cnt=0;
	int rcnt=0;
	while(i<n){
		scanf("%s",a);
		for(j=0;j<6;j++){
			if(a[j]=='\0')break;
			tmp += a[j];
		}
		switch(tmp){
			case 448 :
				// this is push
				scanf("%d",&b[cnt]);
				cnt++;
				i++;
				break;
			case 335 :
				//this is pop
				if(b[rcnt]!=0){
					printf("%d\n",b[rcnt]);
					rcnt++;
				}
				else{
					printf("-1\n");
				}
				i++;
				break;
			case 443 :
				//this is size
				printf("%d\n",cnt-rcnt);
				i++;
				break;
			case 559 :
				//this is empty
				if(b[rcnt]==0){
					printf("1\n");
				}
				else{
					printf("0\n");
				}
				i++;
				break;
			case 553 :
				//this is front
				if(b[rcnt]==0){
					printf("-1\n");
				}
				else{
				printf("%d\n",b[rcnt]);
				}
				i++;
				break;
			case 401 :
				//this is back
				if(b[cnt-1]!=0){
					printf("%d\n",b[cnt-1]);
				}
				else{
					printf("-1\n");
				}
				i++;
				break;
		}
		tmp = 0;
	}
	return 0;
}

