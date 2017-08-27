#include<stdio.h>

int main(){
	int num, n, b;
	scanf("%d %d", &num, &n);
	b= (1 << n) | num;
	printf("%d\n", b);

}
