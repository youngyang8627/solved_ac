#include <stdio.h>

int main()
{
	int a[9],b[9];
	int i;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	int j;
	int x;
        for(i=0;i<9;i++){
	        for(j=i;j<9;j++){
        	        if(a[i]>a[j]){
                	        x=a[i];
                        	a[i]=a[j];
                        	a[j]=x;
                        }
                }
        }
	int cnt;
	for(i=0;i<9;i++){
		if(b[i]==a[8]){
			cnt=i+1;
			break;
		}
	}
        printf("%d\n%d ",a[8],cnt);
       	return 0;
}
