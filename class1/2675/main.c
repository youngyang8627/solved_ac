#include <stdio.h>
#include <string.h>

//prob 2675 string repeat

int main()
{
	int t;
	int a[1000];
	char s[30][1000];
	scanf("%d",&t);
	int i,j;
	char ent='\n';
	for(i=0;i<t;i++){
		scanf("%d ",&a[i]);
		for(j=0;j<1000;j++){
			scanf("%c",&s[i][j]);
			if(s[i][j]=='\n'){
				s[i][j]='\0';
				break;
			}
		}
	}
	int k;
	for(i=0;i<t;i++){
		for(j=0;j<strlen(s[i]);j++){
			for(k=0;k<a[i];k++){
				printf("%c",s[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

