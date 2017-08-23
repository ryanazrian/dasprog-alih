#include<stdio.h>
int fpb(int a, int b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
