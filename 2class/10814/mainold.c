#include <stdio.h>
#include <string.h>
char s[100001][101];
int main()
{
        int n;
        scanf("%d",&n);
        int a[100001];
        int p[100001];//for priority
        int i;
        for(i=0;i<n;i++){
                scanf("%d %s",&a[i],s[i]);
                p[i]=i;
        }
        int j;
        int tmp,cmp;
        char swt[101];
        for(i=0;i<n;i++){
                cmp=i;
                for(j=i;j<n;j++){
                        if(a[j]<a[cmp]){
                                cmp=j;
                        }
                        else if(a[j]==a[cmp]){
                                if(p[cmp]>p[j]){
                                        cmp=j;
                                }
                        }
                }
                tmp=a[cmp];
                a[cmp]=a[i];
                a[i]=tmp;
                strcpy(swt,s[i]);
                strcpy(s[i],s[cmp]);
                strcpy(s[cmp],swt);
                tmp=p[i];
                p[i]=p[cmp];
                p[cmp]=tmp;
                printf("%d %s\n",a[i],s[i]);
        }
        return 0;
}
