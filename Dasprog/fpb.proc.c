#include<stdio.h>
#define FPB(a, b) \
	int t;\
	while(b!=0){ \
	t=a%b; \
	a=b; \
	b=t; \
	}\
	return a;
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", FPB(a,b));

}
