#include <stdio.h>

int main()
{
		int n;
		printf("this program is practice of select_solt\n");
		printf("\nhow many numbers? ( max = 1000 ) : ");
		scanf("%d",&n);
		int i;
		int a[1001]={0};
		int cmp;
		int swt;
		printf("\n ↓please type the numbers ↓\n\n");
		for(i=0;i<n;i++){
				scanf("%d",&a[i]);
		}
		int j;
		for(i=0;i<n;i++){
			cmp=i;
			for(j=i;j<n;j++){
					if(a[cmp]>a[j]){
							cmp=j;
					}
			}
			swt=a[i];
			a[i]=a[cmp];
			a[cmp]=swt;
		}
		printf("\nhere, i solt it all :)\n\n");
		for(i=0;i<n;i++){
			printf("%d\n",a[i]);
		}
		return 0;
}

		
