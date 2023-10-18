#include <stdio.h>

int main()
{
	char pf[20]="push_front";
	char pb[20]="push_back";
	int pbh=0, pfh=0;
	int i;
	for(i=0;i<20;i++){
			if(pf[i]=='\0')break;
			pfh+=pf[i];
	}
	for(i=0;i<20;i++){
			if(pb[i]=='\0')break;
			pbh+=pb[i];
	}
	int pof='p'+'o'+'p'+'_'+'f'+'r'+'o'+'n'+'t';
	int pob='p'+'o'+'p'+'_'+'b'+'a'+'c'+'k';
	int size='s'+'i'+'z'+'e';
	int empty='e'+'m'+'p'+'t'+'y';
	int front='f'+'r'+'o'+'n'+'t';
	int back='b'+'a'+'c'+'k';
	printf("this is push_front = %d\nthis is push_back = %d\nthis is pop_front = %d\nthis is pop_back = %d\nthis is size = %d\nthis is empty = %d\nthis is front = %d\nthis is back = %d\n",pfh,pbh,pof,pob,size,empty,front,back);
	return 0;
}
