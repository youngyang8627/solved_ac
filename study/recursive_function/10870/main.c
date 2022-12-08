#include <stdio.h>

int pipp(int a);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",pipp(n));
	return 0;
}
int all=0;

int pipp(int a){
	if(a==1||a==2){
		return 1;
	}
	else if(a==0){
		return 0;
	}
	else{
		return (pipp(a-1)+pipp(a-2));
	}
}
