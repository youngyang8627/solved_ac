#include <stdio.h>
int n;

int merge(int a[]);

int main(){
	scanf("%d",&n);
	int nback=n;
	int a[1000001]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge(a);
	for(i=0;i<nback;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

int merge(int arr[]){
	if(n!=1){
		n/2;
		return(merge(
