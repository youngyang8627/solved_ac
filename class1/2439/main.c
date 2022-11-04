#include <stdio.h>

int main()
{	
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=n;i>0;i--){
		for(j=0;j<n;j++){
			if(i-1<=j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
