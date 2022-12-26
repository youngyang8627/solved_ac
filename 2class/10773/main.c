#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[100001]={0};
	int i=0;
	int cnt=0;
	while(i<n){
		scanf("%d",&a[cnt]);
		if(a[cnt]==0){
			if(cnt!=0){
				cnt--;
				a[cnt]=0;
			}
		}
		else{
				cnt++;
		}
		i++;
	}
	if(a[0]==0){
			printf("%d\n",0);
			return 0;
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%d\n",sum);
	return 0;
}

