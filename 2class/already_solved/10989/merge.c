#include <stdio.h>

int max=10000000;
int a[100000000];

int main()
{
	int n;
	max = n;
	scanf("%d",&n);
	merge(n);
	int i;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}

int cnt=0;

int merge(int n){

	int a[max];
	int b[max];
