#include <stdio.h>
#include <stdlib.h>

int count_change(int col, int row, char chess[][51], char division_letter)
{
	int		i;
	int		j;
	int		k;
	int		cnt;

	i = col;
	j = row;
	k = 0;
	cnt = 0;
	while (i < 8 + col)
	{
		j = row + 1;
		while (j < 8 + row)
		{
			if (division_letter != chess[i][j])
				division_letter = chess[i][j];
			else
			{
				cnt++;
				if (division_letter == 'W')
					division_letter = 'B';
				else
					division_letter = 'W';
			}
			j++;
		}
		if (chess[i][row] == chess[i + 1][row] && i + 1 != 8 + col)
		{
			if (division_letter == 'W')
				division_letter = 'B';
   		    else
				division_letter = 'W';
			cnt++;
		}
		i++;
	}
	return (cnt);
}


int how_many_square_to_change(int n, int m, char chess[][51])
{
	int 	col;
	int 	row;
	int		cnt;
	int		min;

	col = 0;
	row = 0;
	min = 32767;
	while (col < n)
	{
		while (row < m)
		{
			cnt = count_change(col, row, chess, 'W');
			if (cnt < min)
				min = cnt;
			cnt = count_change(col, row, chess, 'B');
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
	/*chess = (char**) malloc (sizeof (char*) * n);
	while (i++ < n)
	{
		chess[i] = (char*) malloc (sizeof (char) * (m + 1));
	}
	i = 0;*/
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
