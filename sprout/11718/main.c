#include <stdio.h>
#include <string.h>

int main(){
	char a[100][100];
	int i=0;
	int cnt = 0;
	for (i=0;i<100;i++){
		scanf("%[^\n]s",a[i]);
		if(strcmp(a[i],NULL)!=0)
		{
			cnt++;
		}
		else {
			break;
		}
	}
	for(i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

