#include <stdio.h>

int main(){
	int a;
	char c[51];
	scanf("%d",&a);
	unsigned long long i=0,val=0,tmp=1;
	unsigned long long m=1234567891;
	scanf("%s",c);
	for(i=0;i<a;i++){
		val=(val+(c[i]-96)*tmp)%m;
		tmp=(tmp*31)%m;
	}
	printf("%lld",val);
	return 0;
}
