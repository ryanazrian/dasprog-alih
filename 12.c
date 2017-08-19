#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, a[100000], i;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		}
	
	
	int hasil=0, angka;	
	scanf("%d", &angka);
	
	hasil = abs(a[angka]-a[angka-1]);
	
	printf("%d\n", hasil);
}
