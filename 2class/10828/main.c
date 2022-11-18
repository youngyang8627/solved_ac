#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j=0;
	int a[10001]={0};
	char c[10];
	int div=0;
	int hash=0;
	int ll=0;
	int cnt = 0;
	while(cnt<n){
		scanf("%s",c);
		for(j=0;j<10;j++){
			if(c[j]=='\0'){
				break;
			}
			hash+=c[j];
		}
		switch (hash){
			case 448 :
				//this is push
				scanf("%d",&a[i]);
				i++;
				cnt++;
				break;
			case 335 :
				//this is pop
				i--;
				printf("%d",a[i]);
				cnt++;
				break;
			case 443 :
				//this is size
				for(j=0;j<10001;j++){
					if(a[j]==0){
						break;
					}
					ll++;
				}
				break;
			case 559 :
				//this is empty
				if(a[i]==0){
					printf("%d",0);
				}
				else{
					printf("%d",1);
				}
				break;
			case 339 :
				//this is top
				printf("%d",a[i-1]);
				break;
		}
		cnt++;
	}
	return 0;
}
