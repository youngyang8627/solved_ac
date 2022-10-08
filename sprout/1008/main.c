#include <stdio.h>

int main()
{
        long double a,b,c;
        scanf("%Lf %Lf", &a, &b);
	c = a/b;
        printf("%.9Lf",c);
        return 0;
}
