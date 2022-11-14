#include <stdio.h>

int pipp(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",pipp(n));
	return 0;
}

int pipp(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return pipp(n-1)+pipp(n-2);
}
