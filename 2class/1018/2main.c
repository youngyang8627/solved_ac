#include <stdio.h>

int main()
{
	int a,s;
	scanf("%d %d",&a,&s);
	int i,j;
	char m[a][s];
	int w=0;
	int b=0;
	for(i=0;i<a;i++){
		scanf("%s",m[i]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<s;j++){
			if(m[i][j]=='W'){
				w++;
			}
			else if(m[i][j]=='B'){
				b++;
			}
		}
	}
	printf("%d %d",w,b);
	return 0;
}
