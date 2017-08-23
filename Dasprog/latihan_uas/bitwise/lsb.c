#include<stdio.h>

int main(){
	int a, b, num;

	scanf("%d", &num);

	a = num & 1;
	if(a==1){
		printf("1\n");
	}
	else{
		printf("0\n");
	}

}
