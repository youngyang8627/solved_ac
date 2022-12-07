#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[2000002]={0};
	int i=0;
	int tmp;
	while(i<n){
		scanf("%d",&tmp);
		a[tmp+1000000]++;
		i++;
	}
	for(i=0;i<2000002;i++){
		if(a[i]!=0){
			printf("%d\n",i-1000000);
		}
	}
	return 0;
}
