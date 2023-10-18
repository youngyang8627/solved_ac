#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[1000001]={0};
	int i;
	for(i=1;i<=n;i++){
		a[i]=i;
	}
	i=1;
	int tmp = n;
	while(tmp>=i){
		if(tmp==i){
			printf("%d",a[i]);
			return 0;
		}
		if(a[i]==0);
		else if(i%2==1){
			a[i]=0;
		}
		else{
			tmp++;
			a[tmp]=a[i];
			a[i]=0;
		}
		i++;
	}
	return 0;
}

