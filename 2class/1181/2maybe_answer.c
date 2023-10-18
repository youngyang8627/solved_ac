#include <stdio.h>
#include <stdlib.h>

void ft_strcpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return;
}

int ft_cmpchar(char str1[], char str2[])
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_strcmp(char str1[], char str2[])
{
	int	i;

	i = 0;
	while (i < 52)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (ft_cmpchar(str1, str2));
		else if (str1[i] == '\0')
			return (-1);
		else if (str2[i] == '\0')
			return (1);
		i++;
	}
	return (-2147483648);
}
		

int main()
{
	int		i;
	int		j;
	int		n;
	int		cmp;
	int		check;
	char	*tmp;
	char	strs[20001][52];
	char	dump[52] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";

	i = 0;
	scanf("%d", &n);
	tmp = (char*)malloc(sizeof(char) * 52);
	while (i < n)
	{
		scanf("%s", strs[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		cmp = i;
		j = i + 1;
		while (j < n)
		{
			check = ft_strcmp(strs[cmp], strs[j]);
			if (check == -2147483648)
			{
				printf("ERROR : ft_strcmp function has a error. please retry\n");
				return 0;
			}
			else if (check == 1)
				cmp = j;
			else if (check == 0)
				ft_strcpy(dump, strs[j]);
			j++;
		}
		tmp = strs[i];
		strs[i] = strs[cmp];
		strs[cmp] = tmp;
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (ft_strcmp(strs[i],dump) != 0)
			printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}


