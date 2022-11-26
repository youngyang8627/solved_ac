#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int max,min;
	int bmax, bmin;
	int smax=1,smin=1;
	if(a>b){
		max =a;
		min =b;
	}
	else{
		max =b;
		min = a;
	}
	bmax = max;
	bmin = min;
	int i;
	for(i=0;i<30;i++){
		if(max>min){
			if(max%min==0){
				smax=min;
				break;
			}
			else{
				max=max%min;
			}
		}
		else{
			if(min%max==0){
				smax=max;
				break;
			}
			else{
				min=min%max;
			}
		}
	}
	max = bmax;
	min = bmin;
	int k=2;
	for(i=1;i<1000;i++){
		if(max%k==0&&min%k==0){
			max/=k;
			min/=k;
			smin=smin*k;
			k=2;
		}
		else{
			k++;
		}
		if(max/k==1||min/k==1){
			break;
		}
	}
	smin = smin*max*min;
	printf("%d\n%d",smax,smin);
	return 0;
}

