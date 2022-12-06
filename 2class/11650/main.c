#include <stdio.h>

int main()
{
		int n;
		scanf("%d",&n);//scan num of coordinate
		int x[100001]={0};
		int y[100001]={0};
		int i,j;
		int cmp;
		int cx, cy;
		for(i=0;i<n;i++){
				scanf("%d %d",&x[i],&y[i]);
		}//scan x,y coordinate
		for(i=0;i<n;i++){
				cmp=i;
				for(j=i;j<n;j++){
						if(x[cmp]>x[j]){
								cmp=j;
						}
				}
				cx=x[cmp];
				cy=y[cmp];
				x[cmp]=x[i];
				y[cmp]=y[i];
				x[i]=cx;
				y[i]=cy;
		}//compare x coordinate
		for(i=0;i<n;i++){
				cmp=i;
				for(j=i;j<n;j++){
						if(x[cmp]==x[j]&&y[cmp]>y[j]){
								cmp=j;
						}
				}
				cx=x[cmp];
				cy=y[cmp];
				x[cmp]=x[i];
				y[cmp]=y[i];
				x[i]=cx;
				y[i]=cy;
		}//compare y coordinate
		for(i=0;i<j;i++){
				printf("%d %d\n",x[i],y[i]);
		}
		return 0;
}

