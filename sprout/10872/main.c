#include <stdio.h>

int main()
{
	int a,b,i;
	scanf("%d",&a);
	b=1;
	for(i=1;i<=a;i++){
		b=b*i;
	}
	printf("%d",b);
	return 0;
}
