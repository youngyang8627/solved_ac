#include <stdio.h>

int main(){
	short a,b;
	scanf("%hd %hd",&a,&b);
	int smax,smin=0;
	int min,max;
	int i=1,j=0;
	if(a>b){
		max = a;
		min = b;
	}
	else{
		max = b;
		min = a;
	}
	while(i<=max){
		if(a%i==0&&b%i==0){
			smax=i;
		}
		i++;
	}
	i = 1;
	j=1;
	while(smin<=0){
		while(max*i>=min*j){
			if(max*i==min*j){
				smin=max*i;
				break;
			}
			j++;
		}
		j=1;
		i++;
	}
	printf("%d\n%d",smax,smin);
	return 0;
}
