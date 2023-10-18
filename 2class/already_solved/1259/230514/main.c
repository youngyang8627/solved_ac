#include <unistd.h>
#include <stdio.h>

int scan_numbers(int *arr)
{
	int	i;

	i = 0;
	while(1)
	{
		scanf("%d",arr[i]);
		if (arr[i] == 0)
			break;
		i++;
	}
	return (i);
}

int length (int num)
{
	int	i;

	i = 1;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int checking_felindrome(int _num)
{
	int	i;
	int	max;
	int check_1;
	int check_2;

	i = 0;
	max = length(_num);
	while(i < max / 2)
	{
		check_1 = _num % 10 * i;
		if(_num 
	}

int main()
{
	int	i;
	int	cnt;
	int	flag;
	int	num[100000];

	i = 0;
	cnt = scan_numbers(num);
	
	while(i < cnt)
	{
		flag = checking_felindrome(num[i])
		if (flag == 1)
			write(1, "yes\n", 4);
		else
			write(1, "no\n", 3);
		i++;
	}
}
