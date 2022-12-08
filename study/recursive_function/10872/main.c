#include <stdio.h>

int toriel(int num, int ans);
int main()
{
	int n;
	int a;
	int answer;
	scanf("%d",&n);
	a=n;
	answer = toriel(n,a);
	printf("%d",answer);
	return 0;
}

int toriel(int num, int ans){
	if(num==0){
		return 1;
	}
	if(num>1){
		num-=1;
		ans*=num;
		return toriel(num,ans);
	}
	else{
		return ans;
	}
}
