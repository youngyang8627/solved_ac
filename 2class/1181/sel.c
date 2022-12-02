#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int cmp;
	int swt;
	int k;
	int i,j;
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	cmp=a[0];
	for(i=0;i<n;i++){
		cmp=9999999;
		for(j=i;j<n;j++){
			if(cmp>a[j]){
				cmp=a[j];
				k=j;
			}
		}
		swt=a[i];
		a[i]=a[k];
		a[k]=swt;
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
