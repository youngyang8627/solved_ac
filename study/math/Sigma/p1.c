#include <stdio.h>

int main()
{
	int n;
	printf("This is Simple caculator of Sigma\n");
	printf("The equation is : 1~n sum all x^2\n");
	printf("The number is : ");
	scanf("%d",&n);
	int i;
	int sum=0;
	for(i=1;i<=n;i++){
		sum+=(i*i);
	}
	printf("The answer is : %d\n",sum);
	return 0;
}
