#include <stdio.h>

int main(){
	int* ans;
	int i;
	int j=1;
	int tmp=1;
	for(i=2;i<=100000;i++){
		ans[i]=1;
	}
	ans[0]=0;
	ans[1]=0;
	for(i=2;i<=317;i++){
		j=i+1;
		while(j<=100000){
			if(ans[j]!=0){
				if(j%i==0){
					ans[j]=0;
				}
			}
			j++;
		}
	}
	int n,m;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(ans[i]!=0){
			printf("%d\n",i);
		}
	}
	return 0;
}	
