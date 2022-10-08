#include <stdio.h>

int main()
{
	int a[100];
	int n;
	int b=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%1d",&a[i]);
		b = a[i] + b;
	}
	printf("%d", b);
	return 0;
}
		
