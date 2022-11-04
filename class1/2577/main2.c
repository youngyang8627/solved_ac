#include <stdio.h>

int main()
{
	int a,b,c;
	int z[10]={0};
	scanf("%d %d %d",&a,&b,&c);
	int t;
	t = a*b*c;
	int i,j;
	for(i=0;i<15;i++){
		for(j=0;j<10;j++){
			if(t%10==j){
				z[j]++;
			}
		}
		t/=10;
		if(t<=0)break;
	}
	for(i=0;i<10;i++){
		printf("%d\n",z[i]);
	}
	return 0;
}
