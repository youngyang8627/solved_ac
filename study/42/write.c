#include <unistd.h>

int main()
{
    char *s="abc";
    write(1,s,10);
}
