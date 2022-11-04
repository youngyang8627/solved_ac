#include <stdio.h>

int main()
{	
	int n,m;
	scanf("%d %d",&m,&n);
	int i;
	int a[3],b[3];
	for(i=0;i<3;i++){
		a[i] = m%10;
		m/=10;
		b[i] = n%10;
		n/=10;
	}
	int z,x;
	z = a[0]*100+a[1]*10+a[2];
	x = b[0]*100+b[1]*10+b[2];
	if(z<x){
		printf("%d",x);
	}
	else{
		printf("%d",z);
	}
	return 0;
}
