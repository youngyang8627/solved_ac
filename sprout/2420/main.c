#include <stdio.h>

int main()
{
	long a,b;
	scanf("%ld %ld",&a,&b);
	if(a==b){printf("%d",0);return 0;}
        if(a>b){
                printf("%ld",a-b);
        }
        else if(b>a){
                printf("%ld",b-a);
        }
        return 0;
}
