#include <stdio.h>

int main()
{
	double a,b,v;
	scanf("%lf %lf %lf",&a,&b,&v);
	double tmp;
	double d = v-b;
	double e = a-b;
	int tmp2;
	tmp = d/e;
	tmp2=tmp;
	double tmp3=tmp2;
	if(tmp>tmp3){
		tmp2+=1;
	}
	printf("%d",tmp2);
	return 0;
}
