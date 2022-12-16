#include <stdio.h>

int a[1000001];

void merge(int in,int fi){
    if(fi-in>0){
        merge(in,fi/2);
        if(fi/2==0){
            merge(fi/2+1,fi);    
        }
        else{
            merge(fi/2,fi);
        }
        return;
    }
    else{
     	int hf=fi/2;
	int in2=in;
	int fi2=fi;
	int b[fi];
	if(fi==1)hf=1;
	int hf2=hf;
	int i=0;
	int hold;
	if(fi-in>1){
		while(1){
			if(in==hf&&
		}

    }
}

int main()
{
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        merge(0,n-1);
        for(i=0;i<n;i++){
                printf("%d\n",a[i]);
        }
        return 0;
}
