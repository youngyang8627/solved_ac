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
		while(a[i]>0){
			cmp[cnt]=a[i]%10;
			a[i]/=10;
			cnt++;
		}
		cnt--;
		if(cnt%2==0){
			for(j=0;j<=cnt/2;j++){
				if(cmp[j]==cmp[cnt-j]){
					tmp++;
				}
			}
		}
		else{
			for(j=0;j<=cnt/2-1;j++){
				if(cmp[j]==cmp[cnt-j]){
					tmp++;
				}
			}
		}
		if(tmp>=cnt){
			b[i]=1;
		}
		cnt=0;
		i++;
	}
	int acc=i;
	i=0;
	while(i<acc){
		if(b[i]==1){
			printf("yes\n");
		}
		else if(b[i]==0){
			printf("no\n");
		}
		else{
			printf("error\n");
		}
		i++;
	}
	return 0;
}
