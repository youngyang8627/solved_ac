#include <stdio.h>

int pipp(int n)
{
	int ans;
	if (n <= 0)
		return (0);
	else if(n == 1)
		return (1);
	ans = (pipp(n - 1) + pipp(n - 2));
	return (ans);
}

int main()
{
	int	n;
	int	ans;

	scanf("%d",&n);
	ans = pipp(n);
	printf("%d", ans);
	return 0;
}

