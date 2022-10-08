#include <stdio.h>

int main()
{
	char a[102],b[102];
	scanf("%s",a);
	int cnt=0;
	while (1){
		if(a[cnt]==0){break;}
		cnt++;
	}
	int i;
	for(i=0;i<cnt;i++){
		if(a[i]>=65&&a[i]<=90){
			a[i]=a[i]+32;
		}
		else if(a[i]>=97&&a[i]<=122){
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
	return 0;
}
