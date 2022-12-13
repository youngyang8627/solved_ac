#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	char a[20001][51];
	char swt[51];
	int j,k;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int c=0;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(i==j);
			else if(strlen(a[j])>strlen(a[i])){
				strcpy(swt,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],swt);
			}
			else if(strlen(a[i])==strlen(a[j])){
				if(strcmp(a[i],a[j])==0){
					strcpy(a[j],"\0");
					break;
				}
				else{
					for(k=0;k<51;k++){
						if(a[i][k]<a[j][k]){
							strcpy(swt,a[i]);
							strcpy(a[i],a[j]);
							strcpy(a[j],swt);
							break;
						}
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(strcmp(a[i],"\0")!=0){
		printf("%s\n",a[i]);
		}
	}
	return 0;
}


