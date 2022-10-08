#include <stdio.h>

//메인2.C것은 long long int 가 아니라서 값을 제대로 표기 못함
//따라서 long long 함수와 반환값으로 이루어진 main.c 가 정답


long long f(int a, int b){
	long long  x1, x2;
	x1 = a + b;
	x2 = a - b;
	long long y = x1 * x2;
	return y;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%lld",f(a,b));
	return 0;
}

