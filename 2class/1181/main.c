#include <stdio.h>
char b[20001][51];

void merge_sort(char list[][],in,fi){
    int mid= fi/2;
    merge_sort(list,in,mid);
    merge_sort(list,mid+1,fi);
    merge()
}

int main()
{
    int n;
    scanf("%d",&n);
    char a[20001][51];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    
