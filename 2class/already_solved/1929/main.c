#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int cnt=0;
	for(i=m;i<=n;i++){
		else{
			for(j=1;j<=n;j++){
				if(i%j==0){
				cnt++;
				}
			}
			if(cnt==2){
				printf("%d\n",i);
			}
			cnt=0;
		}
	}
	return 0;
}	
