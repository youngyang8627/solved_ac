#include <stdio.h>

int main(){
		int n;
		scanf("%d",&n);
		int i,j;
		char ord[15];
		int tmp;
		int a[20002]={0};
		int cnt=10000;
		int rcnt=10000;
		for(i=0;i<n;i++){
				tmp = 0;
				scanf("%s",ord);
				for(j=0;j<15;j++){
						if(ord[j]=='\0')break;
						tmp+=ord[j];
				}
				switch(tmp){
						case 1096 :
						//this is push_front
							scanf("%d",&a[cnt]);
							cnt++;
							break;
						case 944 :
						//this is push_back
							rcnt--;
							scanf("%d",&a[rcnt]);
							break;
						case 983 :
						//this is pop_front
							if(cnt-rcnt==0){
									printf("-1\n");
							}
							else{
									cnt--;
									printf("%d\n",a[cnt]);
									a[cnt]=0;
							}
							break;
						case 831 :
						//this is pop_back
							if(cnt-rcnt==0){
									printf("-1\n");
							}
							else{
									printf("%d\n",a[rcnt]);
									a[rcnt]=0;
									rcnt++;
							}
							break;
						case 443 :
						//this is size
							printf("%d\n",cnt-rcnt);
							break;
						case 559 :
						//this is empty
							if(cnt-rcnt==0){
									printf("1\n");
							}
							else{
									printf("0\n");
							}
							break;
						case 553 :
						//this is front
							if(cnt-rcnt==0){
									printf("-1\n");
							}
							else{
									printf("%d\n",a[cnt-1]);
							}
							break;
						case 401 :
						//this is back
							if(cnt-rcnt==0){
									printf("-1\n");
							}
							else{
									printf("%d\n",a[rcnt]);
							}
							break;
				}
		}
		return 0;
}
