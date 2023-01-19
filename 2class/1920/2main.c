#include <stdio.h>
#define inum 2147483649

int a[(inum*2)+1]={0};
int b[(inum*2)+1]={0};

int main()
{
	int n,m;
	scanf("%d",&n);
	int i,j;
	int tmp;
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		a[tmp+inum]++;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&tmp);
		if(a[tmp+inum]>0){
 			b[i]++;
		}
	}
	for(i=0;i<m;i++){
		if(b[i]>0){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}

