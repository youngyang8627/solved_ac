#include <stdio.h>

int main()
{
	int a,b,i=0,cnt=0;
	int sum[10000];
	while (scanf("%d %d",&a,&b) != EOF){
		sum[i] = a + b;
		i++;
		cnt++;
	}
	for(i=0;i<cnt;i++){
		printf("%d\n",sum[i]);
	}
	return 0;
}
