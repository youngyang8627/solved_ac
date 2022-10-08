#include <stdio.h>

int main()
{
	int a[28];
	int i;
	for(i=0;i<28;i++){
		scanf("%d",&a[i]);
	}
	int j;
	int b[31];
	for(j=1;j<=30;j++){
		b[j]=j;
	}
	for(i=0;i<28;i++){
		for(j=1;j<=30;j++){
			if(a[i]==b[j]){
				b[j]=0;
			}
		}
	}
	for(i=1;i<=30;i++){
		if(b[i]>0){
			printf("%d\n",b[i]);
		}
	}
	return 0;
}
