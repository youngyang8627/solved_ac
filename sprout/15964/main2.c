#include <stdio.h>

int f(int a, int b);

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int x;
	x = f(a,b);
	printf("%d",x);
	return 0;
}

int f(int a, int b){
	int x;
	x = ( a * a ) - ( b * b );
	return x;
}
