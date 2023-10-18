#include <stdio.h>

void ft_strswap(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int main()
{
	char *str1 = "thisis1";
	char *str2 = "thisis2";

	printf("this is contain of str1 = %s\nthis is contain of str2 = %s\n\n", str1, str2);
	ft_strswap(&str1, &str2);
	printf("now swap string\n\nthis is contain of str1 = %s\nthis is contain of str2 = %s\n\n", str1, str2);
	return (0);
}


