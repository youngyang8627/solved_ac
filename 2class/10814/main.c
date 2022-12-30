#include <stdio.h>
#include <string.h>

char s[100001][101];

int main()
{
	int n;
	scanf("%d",&n);
	long double a[100001];
	int i;
	for(i=0;i<n;i++){
		scanf("%Lf %s",&a[i],s[i]);
		a[i]+=i/1000000;
	}
	int j;
	int cmp;
	long double tmp;
	char swt[101];
	for(i=0;i<n;i++){
		cmp=i;
		for(j=i;j<n;j++){
			if((int)a[j]<(int)a[cmp]){
				cmp=j;
			}
			else if(a[j]==a[cmp]){
				if(a[cmp]-(int)a[cmp]>a[j]-(int)a[j]){
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
		printf("%d %s\n",(int)a[i],s[i]);
	}
	return 0;
}
	
