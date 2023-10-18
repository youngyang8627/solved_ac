#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char a[100000][51]={0};
	int ans[100000]={0};
	int i,j,k;
	int cnt;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<51;j++){
			if(cnt<0)break;
			if(a[i][j]=='('){
				cnt++;
			}
			if(a[i][j]==')'){
				cnt--;
			}
		}
		if(cnt==0){
			ans[i]++;
		}
	}
	for(i=0;i<n;i++){
		if(ans[i]!=0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}	

