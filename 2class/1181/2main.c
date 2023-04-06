#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		n = n + (str[i] - '0');
		i++;
	}
	return (n);
}

int main()
{
	char *str;

	str = (char *)malloc(sizeof(char) * 12);

