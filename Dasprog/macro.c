#include<stdio.h>
int a, b, t;
#define FPB(aa,bb) ({a=aa; b=bb; while(b!=0){t=a%b; a=b; b=t;}a;})

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", FPB(x,y));

} 
