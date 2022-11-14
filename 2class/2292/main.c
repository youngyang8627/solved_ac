#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int i=1;
	int j;
	int cmp=1;
	while(1){
		if(a<=cmp){
			printf("%d",i);
			break;
		}
		for(j=0;j<i;j++){
			cmp+=6;
		}
		i++;
	}
	return 0;
}
