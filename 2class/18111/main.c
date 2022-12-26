#include <stdio.h>

int main(){
	int n,m,b;
	scanf("%d %d %d",&n,&m,&b);
	int i,j;
	int a[501][501];
	for(i=0;i<n;i++){
			for(j=0;j<m;j++){
					scanf("%d",&a[i][j]);
			}
	}
	for(i=0;i<n;i++){
			for(j=0;j<m;j++){
					printf("%d ",a[i][j]);
			}
			printf("\n");
	}
	return 0;
}
