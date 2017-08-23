#include<stdio.h>

int main(){
	int angka[1000];
	float array[1000]={0};
	int n, i;

	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]);
	}
	for(i=0;i<n;i++){
		array[angka[i]]++;
	}
	for(i=1;i<=100;i++){
		if(array[i]!=0){
			printf("%d %.2f\n", i,(float) array[i]/n);
		}
	}
}
