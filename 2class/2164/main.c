#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[1000001]={0};
	int d=0;
	if(n%2==1){
			d++;
	}
	if(n<=2){
		printf("%d",n);
		return 0;
	}
	for(i=1;i<=n/2;i++){
		a[i]=i*2;
	}
	int tmp=n/2;
	for(i=1;i<=tmp;i++){
		if(i==tmp){
				printf("%d",a[i]);
				return 0;
		}
		else if(a[i]==0);
		else if(i%2==1-d){
			a[i]=0;
		}
		else{
			tmp++;
			a[tmp]=a[i];
			a[i]=0;
		}
	}
	return 0;
}
