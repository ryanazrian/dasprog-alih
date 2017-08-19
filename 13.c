#include<stdio.h>

int main(){
	int angka[100000], i, n, hasil;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]);		
		}
	scanf("%d", &hasil);
	
	int count=0;
	for(i=0;i<n;i++){
		if(hasil==angka[i])
		count++;
		}
	printf("%d\n", count);
	
	}
