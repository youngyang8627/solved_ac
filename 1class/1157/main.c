#include <stdio.h>

int main()
{
	int cnt[26]={0};
	char a[1000001];
	int i;
	int j;
	scanf("%s",a);
	for(i=0;i<1000000;i++){
		if(a[i]=='\0'){
			break;
		}
		for(j=0;j<26;j++){
			if(a[i]==65+j||a[i]==97+j){
				cnt[j]++;
			}
		}
	}
	int tmp=0;
	int tot=0;
	int ans=0;
	for(j=0;j<26;j++){
		if(tmp<cnt[j]){
			tmp = cnt[j];
			ans = j;
		}
	}
	for(i=0;i<26;i++){
		if(tmp==cnt[i]){
			tot++;
		}
	}
	if(tot>=2){
		printf("?");
	}
	else if(tot==1){
		printf("%c",65+ans);
	}
	return 0;
}
