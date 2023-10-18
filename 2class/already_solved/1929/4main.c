#include <stdio.h>
#define max 1000000
int main()
{
    long long int m,n;
    scanf("%lld %lld",&m,&n);
    long long int i,j;
    long long int a[max+1]={0};
    a[0]=1;
    a[1]=1;
    for(i=2;i<=1000;i++){
        if(!a[i]){
            for(j=2;i*j<=max;j++){
                a[i*j]=1;
            }
        }
    }
    for(i=m;i<=n;i++){
        if(!a[i]) printf("%lld\n",i);
    }
    return 0;
}