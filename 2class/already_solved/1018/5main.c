#include <stdio.h>
#include <stdlib.h>

int cmp_string(char *str, int row, int flag)
{
	int		i;
	int		cnt;
	char	*WB;
	char	*BW;

	i = 0;
	cnt = 0;
	WB = (char*)malloc(sizeof(char) * 9);
	BW = (char*)malloc(sizeof(char) * 9);
	WB = "WBWBWBWB";
	BW = "BWBWBWBW";
	if (flag == 0)
	{
		while (i < 8)
		{
			if (str[i + row] != WB[i])
				cnt++;
			i++;
		}
	}
	else
	{
		while (i < 8)
		{
			if (str[i + row] != BW[i])
				cnt++;
			i++;
		}
	}
	return (cnt);
}


int count_change(int col, int row, char chess[][51])
{
	int	i;
	int	k;
	int	flag;
	int	cnt;
	int min;

	k = 0;
	min = 32767;
	while (k <= 1)
	{
		flag = k;
		cnt = 0;
		i = 0;
		while (i < 8)
		{
			cnt += cmp_string(chess[i + col], row, flag);
			if (flag == 0)
				flag = 1;
			else
				flag = 0;
			i++;
		}
		if (min > cnt)
			min = cnt;
		k++;
	}
	return (min);
}


int how_many_square_to_change(int n, int m, char chess[][51])
{
	int 	col;
	int 	row;
	int		cnt;
	int		min;

	col = 0;
	min = 32767;
	while (col < n)
	{
		row = 0;
		while (row < m)
		{
			cnt = count_change(col, row, chess);
			if (cnt < min)
				min = cnt;
			row++;
		}
		col++;
	}
	return (min);
}

int main()
{
	int		n;
	int		m;
	int		i;
	int		j;
	int		cnt;
	char	chess[51][51];

	i = 0;
	j = 0;
	scanf("%d %d", &n, &m);
	if (n + m <= 15)
	{
		printf("ERROR : Can't make whore chess plate. plz retry\n");
		return (0);
	}
	while (i < n)
	{
		scanf("%s", chess[i]);
		i++;
	}
	cnt = how_many_square_to_change(n -7, m - 7, chess);
	if (cnt < 0)
	{
		printf("ERROR : The number of change squares has error.\n");
		return (0);
	}
	printf("%d", cnt);
	return (0);
}
