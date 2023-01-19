#include <stdio.h>

int main()
{
	printf("This is Simple caculator of Sigma 2\nThe equation is k=1 ~ n sum all k!\nThe number is : ");
	int n;
	scanf("%d",&n);
	int i,j;
	int sum=0;
	int fact;
	for(i=1;i<=n;i++){
		fact=1;
		for(j=1;j<=i;j++){
			fact*=j;
		}
		sum+=fact;
	}
	printf("The answer is : %d\n",sum);
	return 0;
}
