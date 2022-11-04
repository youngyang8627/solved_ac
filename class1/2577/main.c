#include <stdio.h>
void sep(int s);

int z[10]={0};


int main()
{	
	int a,b,c;
	scanf("%d %d %d",&a ,&b ,&c);
	int t =a*b*c;
	sep(t);
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",z[i]);
	}
	return 0;
}

void sep(int s)
{
	int i,j;
	for(i=0;i<1000;i++)
		for(j=0;j<10;j++){
			if(s%10==j){
				z[j]++;
		}
		if(s<0)break;
		s = s/10;
		
	}
	return;
}
