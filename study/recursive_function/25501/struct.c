#include <stdio.h>

typedef struct value
{
	int slope;
	int interecpt;
}values;

values func(int x1, int y1, int x2, int y2);

int main(void)
{
	values v;
	int x1 = 1;
	int y1 = 2;
	int x2 = 4;
	int y2 = -1;

	v = func(x1,y1,x2,y2);
	printf("%3d %3d\n",v.slope,v.interecpt);

	return 0;
}

values func(int x1, int y1, int x2, int y2){
	values p;
	p.slope = (y2-y1)/(x2-x1);
	p.interecpt = y1 - p.slope*x1;
	return p;
}
