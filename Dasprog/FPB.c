#include "fpb.h"

int FPB(int a, int b){
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
