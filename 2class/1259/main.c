#include <stdio.h>

int main()
{
	int a[10000]={0};
	int cmp[100]={0};
	int i=0;
	int b[10000]={0};
	int j;
	int cnt=0;
	int tmp=0;
	while(1){
		scanf("%d",&a[i]);
		if(a[i]==0){
			break;
		}
		while(a[i]<=0){
			cmp[cnt]=a[i]%10;
			a[i]/10;
			cnt++;
		}
		if(cnt%2==1){
			for(j=0;j<=cnt/2;j++){
				if(cmp[j]==cmp[cnt-j]){
					tmp++;
				}
			}
		}
		else{
			for(j=0;j<=cnt/2-1;j++){
				if(cmp[j]==cmp[cnt-i]){
					tmp++;
				}
			}
		}
		if(tmp>=cnt){
			b[i]=1;
		}
		i++;
	}
	i=0;
	while(i<=cnt){
		if(b[i]==1){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
		i++;
	}
	return 0;
}
