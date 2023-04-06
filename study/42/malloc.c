#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *a;
    char* str;
    str = (char *)malloc(sizeof(char) * 10);
    str[0]='1';
    str[1]='2';
    str[2]='3';
    printf("%s\n",str);
    free(str);
    return 0;
}
