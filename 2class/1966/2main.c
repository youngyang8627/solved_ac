#include <stdio.h>

int main(){
	int tn;
	int n,m;
	scanf("%d",&tn);
	int i;
	int j;
	int cnt;
	int cmp=0;
	int c[101]={0};
	short a[101][10001];
	for(i=0;i<tn;i++){
		scanf("%d %d",&n,&m);
		for(j=0;j<n;j++){
			c[i]++;
			scanf("%hd",&a[i][j]);
			if(a[i][j]>cmp){
				cmp=a[i][j];
			}
		}
	}
	for(i=0;i<tn;i++){
		cnt = 0;
		for(j=0;j<c[i];j++){
			if(a[i][j]==0);
			else if(a[i][j]==cmp){
				cnt++;
				a[i][j]=0;
			}
			if(a[i][m]==0){
				printf("%d\n",cnt);
				break;
			}
			else if(a[i][j]<cmp){
				if(m==j){
					a[i][m+c[i]]==a[i][m];
					m+=c[i];
				}
				c[i]++;
				a[i][j+c[i]]=a[i][j];
				a[i][j]=0;
			}
		}
	}

	return 0;
}
