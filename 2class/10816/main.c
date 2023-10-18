#include <stdio.h>

int main()
{
	int	i;
	int	j;
	int	n;
	int	m;
	int	card[500001];
	int	find;
	int ans[500001] = {0,};

	i = 0;
	scanf("%d",&n);
	while (i < n)
	{
		scanf("%d", &card[i]);
		i++;
	}
	i = 0;
	scanf("%d",&m);
	while (i < m)
	{
		j = 0;
		scanf("%d", &find);
		while (j < n)
		{
			if (find == card[j])
				ans[i]++;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < m)
	{
		printf("%d ",ans[i]);
		i++;
	}
	return (0);
}
