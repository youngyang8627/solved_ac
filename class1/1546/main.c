#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	float a[1001];
	int i,j;
	float cmp=0;
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[j]<a[i]){
				cmp = a[i];
				a[i]= a[j];
				a[j]= cmp;
			}
		}
	}
	float max;
	float sum=0;
	max = a[0];
	for(i=0;i<n;i++){
		sum = sum + (a[i] / max * 100);
	}
	float avg;
	avg = sum / n;
	printf("%f",avg);


	return 0;
}
