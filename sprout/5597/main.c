#include <stdio.h>
int main(){
	int a[28],b[31]={0},i,j;
	for(i=0;i<28;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<28;i++){
		for(j=1;j<=30;j++){
			if(a[i]==j){
				b[j]=a[i];
			}
		}
	}
	for(i=1;i<=30;i++){
		if(b[i]!=i){
			printf("%d\n",i);
		}
	}
	return 0;
}

