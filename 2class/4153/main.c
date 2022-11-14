#include <stdio.h>

int main()
{
	int a[3];
	int b[3];
	int i=0,j,k;
	int cor[1000000]={0};
	int swt;
	while(1){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		if(a[0]+a[1]+a[2]==0){
			break;
		}
		for(j=0;j<3;j++){
			for(k=j;k<3;k++){
				if(a[k]<=a[j]){
					swt = a[k];
					a[k] = a[j];
					a[j] = swt;
				}
			}
		}
		for(j=0;j<3;j++){
			b[j] = a[j]*a[j];
		}
		if(b[0]+b[1]==b[2]){
			cor[i]++;
		}
		i++;
	}
	int tmp=i;
	for(i=0;i<tmp;i++){
		if(cor[i]==1){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
	return 0;
}
