#include <stdio.h>

int main(){
	int tn;
	int n,m;
	scanf("%d",&tn);
	int i;
	int j;
	int cnt;
	int cmp=0;
	short a[101];
	for(i=0;i<tn;i++){
		scanf("%d %d",&n,&m);
		for(j=0;j<n;j++){
			scanf("%hd",&a[i]);
			if(a[i]>cmp){
				cmp=a[i];
			}
		}
		cnt=0;
		while(cmp>0){
			for(j=0;j<n;j++){
				if(cmp==a[j]){
					a[j]=0;
					cnt++;
				}
				if(a[m-1]==0){
					printf("%d\n",cnt);
					cmp=0;
					break;
				}	
			}
			cmp--;
		}
	}
	return 0;
}
