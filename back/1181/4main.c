#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int k;
	int cmp;
	int iswt;
	char cswt[51];
	int l;
	char a[20001][51];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}//scan string to use for{scanf}
	for(i=0;i<n;i++){
		cmp=52;
		for(j=i;j<n;j++){
			if(i==j);
			else if(cmp>strlen(a[j])){
				cmp=strlen(a[i]);
				k=j;
			}
		}
		strcpy(cswt,a[i]);
		strcpy(a[i],a[k]);
		strcpy(a[k],cswt);
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}	
