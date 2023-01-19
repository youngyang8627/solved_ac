#include <stdio.h>

int main()
{
	int n;
	printf("This is Simple caculator of Sigma 3\nThe equation is k=1 ~ 10000 sum all K\nThe number is : ");
	scanf("%d",&n);
	int i;
	int sum=0;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("\nThe answer is : %d\n",sum);
	return 0;
}
