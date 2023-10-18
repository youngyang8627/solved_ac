#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j=0;
	int a[10001]={0};
	int b[10001]={0};
	int k=0;
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
				b[k]=a[i];
				k++;
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
				b[k]=ll;
				k++;
				break;
			case 559 :
				//this is empty
				if(a[i-1]==0){
					b[k]=1;
					k++;
				}
				else{
					b[k]=0;
					k++;
				}
				break;
			case 339 :
				//this is top
				b[k]=a[i-1];
				k++;
				break;
		}
		cnt++;
	}
	int cnt2;
	cnt2=k;
	for(k=0;k<cnt2;k++){
		printf("%d\n",b[k]);
	}
	return 0;
}
