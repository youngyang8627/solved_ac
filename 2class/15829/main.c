#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	char s[a+1];
	unsigned long long i,j;
	unsigned long long tmp=1;
	unsigned long long sum=0;
	long mod = 1234567891;
	scanf("%s",s);
	for(i=0;i<a;i++){
		for(j=1;j<27;j++){
			if(s[i]==96+j){
				if(i==0){
					sum+=j;
					break;
				}
				else{
					tmp*=31;
					sum=(sum+j*tmp)%mod;
					break;
				}
			}
		}
	}
	printf("%lld",sum);
	return 0;
}
