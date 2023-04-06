#include <stdio.h>

int main()
{
    char tmp='c';
    printf("%d %c %p",*tmp, tmp, &tmp);
    return (0);
}