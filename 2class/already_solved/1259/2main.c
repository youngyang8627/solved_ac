#include <stdio.h>

int main()
{
	int a[100]={0};
	int cor[6]={0};
	int i=0;
	int cnt;
	while(1){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
		i++;
	}
	cnt = i;
	i=0;
	int j;
	int tmp=0;
	int d=0;
	int n;
	int b[100]={0};
	while(i<=cnt){
		for(j=0;j<5;j++){
			if(a[i]<=0)break;
			cor[j]=a[i]%10;
			a[i]/10;
		}
		n=j/2+1;
		while(j>=0){
			if(cor[tmp]==cor[j]){
				d++;
			}
			tmp++;
			j--;
		}
		if(d==n){
			b[i]=1;
		}
	}
	for(i=0;i<cnt;i++){
		if(b[i]==1){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}
