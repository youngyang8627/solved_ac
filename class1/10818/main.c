#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int min = 1111111, max = -1111111;
	int i;
	int a;
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a<min){
			min = a;
		}
		if(a>max){
			max = a;
		}
	}
	printf("%d %d",min,max);
	return 0;
}

