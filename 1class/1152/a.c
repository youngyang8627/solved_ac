#include <stdio.h>

int main(){
	char a[1000001];
	scanf("%[^\n]s",a);
	int i,j;
	int cnt=0;
	for(i=0;i<1000001;i++){
		if(a[i]!='\0')cnt++;
		else{break};
	}
	int tmp=0;
	for(i=0;i<cnt;i++){
		if(a[i]==' '){
			tmp++;
		}
	}
	if(tmp==cnt){
		printf("%d",0);
		return 0;
	}
	if(a[0]!=' '&&tmp==0){
		printf("%d",1);
		return 0;
	}
	for(i=0;i<cnt;i++){
		if(a[i]==' '){
			tmp++;
		}
	}
	if(a[0]==' ')
	return 0;
}

