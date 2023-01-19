#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d",&n);
	int i;
	int a[100001];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[100001];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int j;
	int tmp;
	for(i=0;i<m;i++){
		tmp=0;
		for(j=0;j<n;j++){
			if(a[j]==b[i]){
				tmp++;
				break;
			}
		}
		if(tmp>0){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}
