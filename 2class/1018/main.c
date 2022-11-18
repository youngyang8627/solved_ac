#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	char a[n][m];
	int i=0,j,k,l;
	char b;
	int h,w;
	int cnt=11111110;
	int cntb=0,cntw=0;
	int tot=0;
	h=n-8;
	w=m-8;
	for(i=0;i<=n;i++){
		scanf("%s",a[i]);
	}
	while(i<=h){
		for(j=0;j<w;j++){
			for(k=0+i;k<8+i;k++){
				for(l=0+w;l<8+w;l++){
					if(a[k][l]=='W'){
						cntw++;
					}
					else if(a[k][l]=='B'){
						cntb++;
					}
				}
			}
			tot = (32-cntw)+(32-cntb);
			if(cnt>tot){
				cnt = tot;
			}
			cntw=0;
			cntb=0;
		}
		i++;
	}
	printf("%d",cnt);
	return 0;
}
