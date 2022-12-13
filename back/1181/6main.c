#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[20001][51];
    int i,j,k;
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    int cmp;
    char swt[51];
    for(i=0;i<n;i++){
        cmp=i;
        for(j=i+1;j<n;j++){
            if(strlen(a[cmp])>strlen(a[j])){
                cmp=j;
            }
        }
        strcpy(swt,a[cmp]);
        strcpy(a[cmp],a[i]);
        strcpy(a[i],swt);
    }
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}