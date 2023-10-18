#include <stdio.h>
#include <string.h>

int main(){
	char a[10001][10];
	int b;
	int i=0;
	int j=0;
	int cnt;
	while(1){
		scanf("%s",a[i]);
		if(strcmp(a[i],"0")==0)break;
		i++;
	}
	cnt = i;
	i=0;
	int tmp=0;
	while(i<cnt){
		j=0;
		b=0;
		tmp =0;
		while(1){
			if(a[i][j]!='\0'){
				b++;
			}
			else{
				break;
			}
			j++;
		}
		for(j=0;j<b/2;j++){
			if(a[i][j]==a[i][b-1-j]){
				tmp++;
			}
		}
		if(tmp==b/2){
			strcpy(a[i],"yes");
		}
		else{
			strcpy(a[i],"no");
		}
		i++;
	}	
	for(i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

