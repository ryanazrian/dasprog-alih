#include<stdio.h>

int main(){
	int n, a[100000], i;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		}
	
	int hasil=0, angka;	
	scanf("%d", &angka);
	
	for(i=0;i<angka;i++){
		hasil+=a[i];
		}
	printf("%d\n", hasil);
}
