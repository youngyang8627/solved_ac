#include <stdio.h>

void ft_1swap(int *a, int *b)
{
	int	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}
void add_swap(int **a, int **b)
{
	int	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

void ft_cswap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
	return;
}

void ft_addcswap(char ***str1, char ***str2)
{
	char	**tmp;
	char	*tmp2;
	*tmp = **str1;
	**str1 = **str2;
	**str2 = *tmp;
	return;
}


int main()
{
	int 	a;
	int 	b;
	int		*pta;
	int		*ptb;
	int		**ptpta;
	int		**ptptb;
	char	*str1 = "hello";
	char	*str2 = "world";
	char	**ptstr1;
	char	**ptstr2;

	a = 10;
	b = 20;
	pta = &a;
	ptb = &b;
	ptstr1 = &str1;
	ptstr2 = &str2;
	ft_1swap(&a, &b);
	printf("%d %d\n",a,b);
	add_swap(&pta, &ptb);
	printf("%d %d\n\n",*pta,*ptb);
	ft_cswap(&str1, &str2);
	printf("%s %s\n", str1, str2);
	ft_cswap(ptstr1, ptstr2);
	printf("%s %s\n",*ptstr1, *ptstr2);
	return 0;
}
