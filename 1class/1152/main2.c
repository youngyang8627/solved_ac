#include <stdio.h>

int main()
{
	char a[1000001];
	int cnt=0;
	int c=0,i;
	scanf("%[^n]S",&a);
	for(i=0;i<1000001;i++){
		if(a[i]!='\0'){
			cnt++;
		}
		else break;
	}	
	for(i=0;i<1000010;i++){
		if(a[i]=='\0'){
			break;
		}
		else if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			
		}
		else if(a[i]==' '){
			
		}
	return 0;
}
