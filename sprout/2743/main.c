#include <stdio.h>

int main(){
	char a[102];
	scanf("%s",a);
	int i,cnt=0;
	for(i=0;i<102;i++){
		if(a[i]>0){
			cnt++;
		}
		if(a[i]==0){
			break;
		}
	}
	printf("%d",cnt);
	return 0;
}
