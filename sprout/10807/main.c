#include <stdio.h>

int main(){
	int n,v;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&v);
	int cnt=0;
	for(i=0;i<n;i++){
		if(a[i]==v){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

