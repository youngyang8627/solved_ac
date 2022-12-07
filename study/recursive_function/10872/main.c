#include <stdio.h>

int a;

int toriel(int n){
	if(a>1){
		a*=n;
		n-1;
		return n;
	}
	else{
		return a;
	}
}

int main()
{
	int n;
	a=n;
	scanf("%d",&n);
	printf("%d",toriel(n));
	return 0;
}
