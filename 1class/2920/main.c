#include <stdio.h>

int main()
{
	int a[9];
	int i,j;
	int status[8]={0};
	int tot=0;
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<8;j++){
		if(a[j]==j+1){
			status[j] = 1;
		}
	}
	for(j=0;j<8;j++){
		if(a[j]==8-j)
		{
			status[j] = -1;
		}
	}
	for(i=0;i<8;i++){
		tot = status[i] + tot;
	}
	if(tot == 8)printf("ascending");
	else if(tot == -8)printf("descending");
	else printf("mixed");
	return 0;
}


