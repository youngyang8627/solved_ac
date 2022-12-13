#include <stdio.h>

int main(){
	int n;//3 to the power of n
	scanf("%d",&n);
	star(n,n);
	return 0;
}

int star(int n1,n2){
	if(n>3){
		return star(n/3);
	}
	if(n==3){
		printf("***");
	}	
