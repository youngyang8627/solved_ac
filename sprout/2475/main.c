#include <stdio.h>


int f(int x1,int x2 ,int x3 ,int x4 ,int x5){
	int x;
	x1 = x1 * x1;
	x2 = x2 * x2;
	x3 = x3 * x3;
	x4 = x4 * x4;
	x5 = x5 * x5;
	x = x1 + x2 + x3 + x4 + x5;
	x = x % 10;
	return x;
}

int main()
{
	int x1, x2, x3 ,x4 ,x5;
	scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);
	printf("%d",f(x1,x2,x3,x4,x5));
	return 0;
}

