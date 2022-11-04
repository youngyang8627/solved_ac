#include <stdio.h>

int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		a[i]%=42;
	}
	int cnt = 10;
	int j;
	int tmp;
	for(i=0;i<10;i++){
		if(cnt==1)break;
		for(j=i+1;j<10;j++){
			if(a[i]==a[j]&&a[i]!=-1){
				cnt--;
				a[j]=-1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

