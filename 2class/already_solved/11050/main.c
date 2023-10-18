#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int tmp1=1;
    int tmp2=1;
    int i;
    int cnt=1;
    i=n;
    while(cnt<=k){
        tmp1*=i;
        i--;
        cnt++;
    }
    for(i=2;i<=k;i++){
        tmp2*=i;
    }
    printf("%d",tmp1/tmp2);
    return 0;
}