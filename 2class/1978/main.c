#include <stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	short a[100];
	int cnt=0;
	int tmp=0;
	for(i=0;i<n;i++){
		scanf("%hd",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<=a[i];j++){
			if(a[i]%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			tmp++;
		}
		cnt=0;
	}
	printf("%d",tmp);
	return 0;
}
