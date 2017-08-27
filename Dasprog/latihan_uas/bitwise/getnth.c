#include<stdio.h>

int main(){
	int a, b, num, n;
	scanf("%d %d", &num, &n);
	b= (num >> n) & 1;
	
	printf("%d", b);

}
