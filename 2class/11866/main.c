#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int cnt,i;
	cnt = 0;
	int a[1000001];
	int j;
	for(i=0;i<n*100;i++){
		for(j=0;j<n;j++){
			a[i*n+j]=j+1;
		}
	}
	int tmp=0;
	printf("<");
	i=0;
	while (cnt<n){
		if(cnt==n-1){
			printf("%d>",a[i]);
			return 0;
		}
		if(tmp==m-1){
			printf("%d, ",a[i]);
			m+=m;
			cnt++;
		}
		i++;
		tmp++;
	}
	return 0;
}

