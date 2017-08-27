#include<stdio.h>

int main(){
	int num, i=0, j, angka[100];
	
	scanf("%d", &num);
	for(i=0;num;i++){
		angka[i] = num & 1;
		num >>=1;
		
	}
	for(j=i-1;j>=0;j--){
		printf("%d ", angka[j]);
	}
	printf("\n");
}
