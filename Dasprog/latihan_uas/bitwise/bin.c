#include<stdio.h>
#define INT_size sizeof(int)*8

int main(){
	int num, i, bin[1000];
	int index = INT_size-1;
	scanf("%d", &num);
	for(i=0;num;i++){
		bin[i] = num & 1;
		num >>=1;
	}
	for(i;i>=0;i--){
		printf("%d", bin[i]);
	}
	printf("\n");
	
}
