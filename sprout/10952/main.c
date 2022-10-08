#include <stdio.h>

int main()
{
	int a,b,c[1000],i=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0){break;}
		c[i]=a+b;
		i++;
	}
	int n;
	n = i;
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}

