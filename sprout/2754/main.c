#include <stdio.h>
#include <string.h>

int main()
{
	char a[10];
	scanf("%s",a);
	if(strcmp(a,"A+")==0){
		printf("4.3");
	}
	else if(strcmp(a,"A0")==0){
		printf("4.0");
	}
	else if(strcmp(a,"A-")==0){
		printf("3.7");
	}
	else if(strcmp(a,"B+")==0){
		printf("3.3");
	}
	else if(strcmp(a,"B0")==0){
		printf("3.0");
	}
	else if(strcmp(a,"B-")==0){
		printf("2.7");
	}
	else if(strcmp(a,"C+")==0){
		printf("2.3");
	}
	else if(strcmp(a,"C0")==0){
		printf("2.0");
	}
	else if(strcmp(a,"C-")==0){
		printf("1.7");
	}
	else if(strcmp(a,"D+")==0){
		printf("1.3");
	}
	else if(strcmp(a,"D0")==0){
		printf("1.0");
	}
	else if(strcmp(a,"D-")==0){
		printf("0.7");
	}
	else{printf("0.0");}
	return 0;
}
