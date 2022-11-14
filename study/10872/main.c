#include <stdio.h>

int pack(int a);

int main()
{
	int a;
	scanf("%d",&a);
	int n= pack(a);
	printf("%d",n);
	return 0;
}

int pack(int a)
{
	if(a==0)return 1;
	return a*pack(a-1);
}
