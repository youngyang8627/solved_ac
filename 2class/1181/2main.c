#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char a[20001][51];
	int b[20001]={0};
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	int tmp;
	char tmp2[51];
	i=0;
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[i]<b[j]){
				tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
				strcpy(tmp2,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],tmp2);
			}
			if(b[i]==b[j]&&i!=j){
				if(strcmp(a[i],a[j])==0){
					b[j]=60;
					strcpy(a[j],"nothing");
				}
				else{
					for(k=0;k<51;k++){
						if(a[i][k]<a[j][k]){
							strcpy(tmp2,a[i]);
							strcpy(a[i],a[j]);
							strcpy(a[j],tmp2);
							break;
						}
					}
				}
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(b[i]<52){
			printf("%s\n",a[i]);
		}
	}
	return 0;
}
