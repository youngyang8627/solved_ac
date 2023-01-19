#include <stdio.h>

int main()
{
	int tn;
	scanf("%d",&tn);
	int i,j,k;
	int a[1001][101];
	int n[1001],m[1001];
	int cmp[1001]={0};
	for(i=0;i<tn;i++){
		scanf("%d %d",&n[i],&m[i]);
		for(j=0;j<n[i];j++){
			scanf("%d",&a[i][j]);
			if(cmp[i]<a[i][j]){
					cmp[i]=a[i][j];
			}
		}
	}//get int n[i] ,m[i], a[i][j], cmp[i]
	int cnt=0;
	int tmp;
	int nb;
	for(i=0;i<tn;i++){
		tmp=0;
		while(tmp!=1){
			nb=n[i];
			for(j=0;j<nb;j++){
				if(a[i][j]==0);
				else if(a[i][j]==cmp[i]){
					cnt++;
					a[i][j]=0;
				}
				else if(a[i][m[i]]==cmp[i]){
					printf("%d\n",cnt);
					cnt=0;
					tmp=1;
					break;
				}
				else if(a[i][j]<cmp[i]){
					n[i]++;
					if(j==m[i])m[i]=n[i];
					a[i][n[i]]=a[i][j];
					a[i][j]=0;
				}
			}
			cmp[i]--;
		}
	}
	return 0;
}
