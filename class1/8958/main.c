#include <stdio.h>
#include <string.h>

int main()
{
	int cnt=0;
	int i,j;
	int n;
	scanf("%d",&n);
	int tot[1000]={0};
	char a[n][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		}
	for(i=0;i<n;i++){
		for(j=0;j<1000;j++){
			if(a[i][j]=='\0')break;
			if(a[i][j]=='O'){
				cnt++;
				tot[i] = cnt + tot[i];
			}
			if(a[i][j]=='X'){
				cnt = 0;
			}
		}
		cnt = 0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",tot[i]);
	}
	return 0;
}


