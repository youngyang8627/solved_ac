#include <stdio.h>

typedef struct value
{
	int ans;
	int count;
}values;
int n;
int cnt=0;
values pel(char a[1001],int in,int fi);

int main()
{
	scanf("%d",&n);//number of count test
	char a[1000][1001];
	values v;
	int b[1000]={0};
	int c[1000]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		v=pel(a[i],0,n);
		b[i]=v.ans;
		c[i]=v.count;
		cnt=0;
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",b[i],c[i]);
	}
	return 0;
}

values pel(char a[1001],int in,int fi){
	values p;
	if(fi-in<=1){
		if(cnt==n/2){
			p.ans = 1;
			p.count = cnt;
			return p;
		}
		else{
			p.ans = 0;
			p.count = cnt;
			return p;
		}
	}
	else if(a[in]==a[fi]){
		cnt++;
	}
	return pel(a,in+1,fi-1);
}
