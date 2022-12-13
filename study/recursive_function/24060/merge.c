#include <stdio.h>

int a[1000001];
int swt;
int hold;

void merge(int in,int fi){
	if(in-fi>0){
		merge(in,fi/2);
		merge(fi/2,fi);
		return;
	}
	else{
		int i,j;
		for(i=in;i<=fi;i++){
			hold = i;
			for(j=i+1;j<=fi;j++){
				if(a[hold]>a[j]){
					hold=j;
				}
			}
			swt=a[hold];
			a[hold]=a[i];
			a[i]=swt;
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge(0,n-1);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
