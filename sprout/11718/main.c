#include <stdio.h>
#include <string.h>

int main(){
	char a[100][100];
	int i=0;
	int cnt = 0;
	for (i=0;i<100;i++){
		if(gets(a[i])) break;
		cnt++;
	}
	for(i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

