#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a[n][51];
	int b[20000] = {0};
	char swt[100]="nothing";
	int s=0;
	int i,j;
	char sjfrkqt[30]="abcdenothing";
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<51;j++){
			if(a[i][j]!='\0'){
				b[i]++;
			}
			else break;
		}
	}
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				strcpy(a[j],sjfrkqt);
				b[j]=0;
			}
			else if(b[j]>b[i]){
				s=b[i];
				b[i]=b[j];
				b[j]=s;
				strcpy(swt,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],swt);
			}
			else if(b[i]==b[j]){
				for(k=0;k<50;k++){
					if(a[i][k]>a[j][k]){
						s=b[i];
						b[i]=b[j];
						b[j]=s;
						strcpy(swt,a[i]);
						strcpy(a[i],a[j]);
						strcpy(a[j],swt);
						break;
					}
					else if(a[i][k]<a[j][k]){
						s=b[j];
						b[j]=b[i];
						b[i]=s;
						strcpy(swt,a[j]);
						strcpy(a[j],a[i]);
						strcpy(a[i],swt);
						break;
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(strcmp(a[i],sjfrkqt)!=0){
			printf("%s\n",a[i]);
		}
	}
	return 0;
}
