#include <stdio.h>

int main()
{
	int t;
	int h,w,n;
	int i=0;
	int j,k;
	int tmp=1;
	int cor[100001]={0};
	int nool=0;
	scanf("%d",&t);
	while(i<t){
		scanf("%d %d %d",&h,&w,&n);
		for(j=1;j<=w;j++){
			for(k=1;k<=h;k++){
				if(tmp==n){
				cor[i]=j+k*100;
				nool=1;
				break;
				}
				else{
					tmp++;
				}
			}
			if(nool==1){
				nool=0;
				tmp = 1;
				break;
			}
		}
		i++;
	}
	i=0;
	while(i<t){
		printf("%d\n",cor[i]);
		i++;
	}
	return 0;
}
