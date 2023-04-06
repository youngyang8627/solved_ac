#include <stdio.h>

int main()
{
	char a[1000001];
	int i;
	int cnt=0;
	scanf("%[^\n]s",a);
	int b=0,c=0;
	int tmp=0;
	if(a[0]==' '&&a[1]=='\0'){
		printf("%d",0);
		return 0;
	}
	for(i=0;i<1000001;i++){
		if(a[i]=='\0')break;
		else if(a[i]==' '){
			b++;
		}
		c++;
	}
	if(b==c){
		printf("%d",0);
		return 0;
	}
	if(a[0]!=' '&&b==0){
		printf("%d",1);
		return 0;
	}
	for(i=0;i<1000001;i++){
		if(a[i]==' '&&a[i+1]=='\0'){
			cnt++;
			tmp = i+1;
			break;
		}
		if(a[i]=='\0'){
			tmp = i;
			break;
		}
		else if(a[i]==' ')cnt++;
	}
	if(a[0]==' '&&a[tmp-1]==' '){
		cnt--;
	}
	if(a[0]!=' '&&a[tmp-1]!=' '){
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
