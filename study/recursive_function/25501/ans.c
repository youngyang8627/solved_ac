#include <stdio.h>
#include <string.h>

typedef struct value
{
	int ans;
	int count;
}values;

int n;
int cnt=1;

values pel(char d[1001], int in, int fi, int tmp);

int main()
{
	scanf("%d",&n);//number of count test
	char a[1001];
	values v;
	int b[1000]={0};
	int c[1000]={0};
	int i;
	int tmp;
	for(i=0;i<n;i++){
		scanf("%s",a);
		tmp=strlen(a)-1;
		v=pel(a,0,tmp,tmp);
		b[i]=v.ans;
		c[i]=v.count;
		cnt=1;
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",b[i],c[i]);
	}
	return 0;
}

values pel(char d[1001],int in, int fi, int tmp){
	values p;
	if(fi-in<=0){
		p.ans = 1;
		p.count = cnt;
		return p;
	}
	else if(d[in]==d[fi]){
		cnt++;
	}
	else{
		p.ans=0;
		p.count=cnt;
		return p;
	}
	return pel(d,in+1,fi-1,tmp);
}
