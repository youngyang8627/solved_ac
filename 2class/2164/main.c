#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int cmp=2;
    int i=1;
    int j;
    while(n>=cmp*2){
        cmp*=2;
    }
    cmp/=2;
    int a[500001]={0};
    int size=0;
    for(i=1;i<n/cmp;i++){
        a[i]=cmp*i;
        size++;
    }
    cmp/=4;
    i=1;
    int tmp=n/cmp;
    while(1){
        if(size<=1){
            printf("%d",a[i]);
            return 0;
        }
        else if(a[i]==0);
        else if(i%2==1){
            a[i]=0;
            size--;
        }
        else{
            tmp++;
            a[tmp]=a[i];
            a[i]=0;
        }i++;
    }
}