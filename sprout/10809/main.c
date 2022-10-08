#include <stdio.h>

int main(){
	char a[102];
	int apb[27];
	int i,j;
	for(i=0;i<26;i++){
		apb[i]=-1;
	}
	scanf("%s",a);
	for(i=0;i<103;i++){
		if(a[i]==0){
			break;
		}
		for(j=0;j<26;j++){
			if(a[i]==97+j){
				if(apb[j]==-1){
					apb[j]=i;
				}
			}
		}
	}
	for(i=0;i<26;i++){
		printf("%d ", apb[i]);
	}
	return 0;
}

		
