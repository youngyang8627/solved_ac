#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	char a[20001][51];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int cmp;
	char swt[51];
	for(i=0;i<n;i++){
		cmp=i;
		for(j=i+1;j<n;j++){
			if(strcmp(a[cmp],a[j])==0){
				strcpy(a[j],"zzzznothing");
			}
			if(strlen(a[cmp])>strlen(a[j])){
				cmp=j;
			}
		}
		strcpy(swt,a[cmp]);
		strcpy(a[cmp],a[i]);
		strcpy(a[i],swt);
	}
	int k;
	for(i=0;i<n;i++){
		cmp=i;
		for(j=i+1;j<n;j++){
			if(strlen(a[cmp])==strlen(a[j])){
			for(k=0;k<51;k++){
				if(a[cmp][k]>a[j][k]){
					cmp=j;
					break;
				}
			}
			}
		}
		strcpy(swt,a[cmp]);
		strcpy(a[cmp],a[i]);
		strcpy(a[i],swt);
	}
	for(i=0;i<n;i++){
		if(strcmp(a[i],"zzzznothing")!=0){
			printf("%s\n",a[i]);
		}
	}
	return 0;
}
