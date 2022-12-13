#include <stdio.h>
#include <string.h>

int main(){
	char a[101][101];
	int i=0;
	int cnt=0;
	int cmp=-1;
	while(a[i][0]!=EOF){
		scanf("%[^\n]s",a[i]);
	}
	for(i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
