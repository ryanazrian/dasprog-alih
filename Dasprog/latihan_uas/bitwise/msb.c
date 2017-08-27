#include<stdio.h>

int main(){
	int num, a, b;
	scanf("%d", &num);
	
	a= 1 << ((sizeof(int)*8)-1);
	
	b=num & a;	
	if(b){
		printf("1\n");
	}
	else {
		printf("0\n");
	}

}
