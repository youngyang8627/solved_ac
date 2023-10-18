#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i;
	int cnt=1;
	int a[1000001];
	a[0]=0;
	for(i=1;i<=n;i++){
		a[i]=i;
	}
	printf("<");
	int tmp=n;
	int cnt2=0;
	for(i=1;i<=tmp;i++){
		if(a[i]==0);
		else if(cnt==m){
			if(cnt2==n-1){
					printf("%d>",a[i]);
					return 0;
			}
			cnt=1;
			cnt2++;
			printf("%d, ",a[i]);
		}
		else{
			cnt++;
			tmp++;
			a[tmp]=a[i];
			a[i]=0;
		}
	}
	return 0;
}
