#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	int a[1001];
	for(i=1;i<=n;i++){
		a[i]=i;
	}
	int cnt1=1,cnt2=0;
	printf("<");
	for(i=0;i<n*2;i++){
			for(j=1;j<=n;j++){
					if(a[j]==0);
					else{
							cnt1++;
					}
					if(cnt1==m){
							printf("%d",a[j]);
							a[j]=0;
							cnt1=1;
							cnt2++;
					}
			}
			if(cnt2==n-1){
					printf(">");
					return 0;
			}
			else{
					printf(", ");
			}
	}
}
