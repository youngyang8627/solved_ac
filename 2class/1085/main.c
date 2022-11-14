#include <stdio.h>

int main()
{
	int x[4];
	scanf("%d %d %d %d", &x[0],&x[1],&x[2],&x[3]);
	x[2]-=x[0];
	x[3]-=x[1];
	int i;
	int cmp=1001;
	for(i=0;i<4;i++){
		if(cmp>=x[i]){
			cmp=x[i];
		}
	}
	printf("%d",cmp);
	return 0;
}
