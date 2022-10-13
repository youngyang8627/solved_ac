#include <stdio.h>

int main()
{
	int a[9];
	int i;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	int j;
	int x;
	for(i=0;i<9;i++){
		for(j=i;j<9;j++){
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(i=0;i<9;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
 
