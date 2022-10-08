#include <stdio.h>

int main(){
	int n, x;
	scanf("%d %d",&n, &x);
	int a[n],b[n];
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(x>a[i]){
			b[i] = a[i];
		}
		else{b[i]=0;}
	}
	for(i=0;i<n;i++)
	{
		if (b[i]>0){
			printf("%d ",b[i]);
		}
	}
	return 0;
}
	
