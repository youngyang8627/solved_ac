#include <stdio.h>

int a[1000001];
int swt;

void merge(int in, int fi){
	if(fi-in>0){
		merge(in,fi/2);
		if(fi/2
