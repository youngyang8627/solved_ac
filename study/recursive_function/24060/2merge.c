#include <stdio.h>

int a[1000001];
int swt;

void merge(int in,int fi){
    if(fi-in>0){
        merge(in,fi/2);
        if(fi/2==0){
            merge(fi/2+1,fi);    
        }
        else{
            merge(fi/2,fi);
        }
        return;
    }
    else{
        int b[fi];
        int i=in;
        int j;
        int cmp;
        for(i=in;i<fi;i++){
            
        }
        for(i=in;i<fi;i++){
            a[i]=b[i];
        }
    }
}

int main()
{
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        merge(0,n-1);
        for(i=0;i<n;i++){
                printf("%d\n",a[i]);
        }
        return 0;
}