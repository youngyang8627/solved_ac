#include <stdio.h>

int main()
{
	int	a;
	int	b;

	printf("please type a & b\n");
	scanf("%d %d", &a, &b);
	printf("\nif (a > b)\ntrue :  a is bigger \nelse : b is bigger\n");
	printf("\nusing if = ");
	if (a > b)
		printf("a is bigger\n\n");
	else
		printf("b is bigger\n\n");
	printf("(a > b) ? a is bigger : b is bigger\n\n");
	printf("using ternary operator = ");
	(a > b) ? printf("a is bigger\n") : printf("b is bigger\n");
	return (0);
}
