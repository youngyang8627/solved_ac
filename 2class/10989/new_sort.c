#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[10001]={0};
	int i=0;
	int tmp;
	while(i<n){
		scanf("%d",&tmp);
		a[tmp]++;
		i++;
	}
	for(i=1;i<10001;i++){
		while(a[i]>0){
			printf("%d\n",i);
			a[i]--;
		}
	}
	return 0;
}
