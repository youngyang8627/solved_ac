#include <stdio.h>

int main()
{
<<<<<<< HEAD
    int n;
    scanf("%d",&n);
    int cmp=2;
    int i=1;
    int j;
    while(n>=cmp*2){
        cmp*=2;
    }
    cmp/=2;
    int a[500001]={0};
    int size=0;
    for(i=1;i<n/cmp;i++){
        a[i]=cmp*i;
        size++;
    }
    cmp/=4;
    i=1;
    int tmp=n/cmp;
    while(1){
        if(size<=1){
            printf("%d",a[i]);
            return 0;
        }
        else if(a[i]==0);
        else if(i%2==1){
            a[i]=0;
            size--;
        }
        else{
            tmp++;
            a[tmp]=a[i];
            a[i]=0;
        }i++;
    }
}
=======
	int n;
	scanf("%d",&n);
	int i;
	int a[1000001]={0};
	int d=0;
	if(n%2==1){
			d++;
	}
	if(n<=2){
		printf("%d",n);
		return 0;
	}
	for(i=1;i<=n/2;i++){
		a[i]=i*2;
	}
	int tmp=n/2;
	for(i=1;i<=tmp;i++){
		if(i==tmp){
				printf("%d",a[i]);
				return 0;
		}
	else if(a[i]==0);
		else if(i%2==1-d){
			a[i]=0;
		}
		else{
			tmp++;
			a[tmp]=a[i];
			a[i]=0;
		}
	}
	return 0;
}
>>>>>>> bfec4b28b72b9081620a59ac5ffd6bf64e190769
