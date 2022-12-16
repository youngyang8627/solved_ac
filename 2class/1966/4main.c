#include <stdio.h>

int main()
{
	int tn;
	scanf("%d",&tn);//this is test num
	int n[101],m[101];//n mean how many number, m mean what location that i want to know print order
	int i,j;//int that need running for function
	int a[101][10001];//arr to put parameter of imfortant num
	int cmp[101]={0};//compare imfortant parameter
	for(i=0;i<tn;i++){
		scanf("%d %d",&n[i],&m[i]);
		for(j=0;j<n[i];j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>cmp[i])cmp[i]=a[i][j];
		}
	}
	int cnt;//count how many do print order
	int nback;
	int rcnt;
	for(i=0;i<tn;i++){
		nback=n[i];
		rcnt=0;
		while(1){
			for(j=0;j<nback+rcnt;j++){
				if(a[i][j]==0);
				else if(a[i][j]=cmp[i]){
					cnt++;
					a[i][j]=0;
				}
				else if(a[i][j]<cmp[i]){
					rcnt++;
					a[i][n[i]+rcnt]=a[i][j];
					a[i][j]=0;
				}
				if(a[i][m[i]]==0){
					printf("%d\n",cnt);
					cnt=0;
					break;
				}
			}
			if(cnt==0){
					break;
			}
			else{
					m[i]=m[i]+n[i]+rcnt;
			}
		}
	}
	return 0;
}
