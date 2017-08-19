#include<stdio.h>

int main(){
	int angka[1000], i, n, cari;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]);
		}
	
	int count=0, count1=0;
	scanf("%d", &cari);
	for(i=0;i<n;i++){
		if(cari==angka[i]){
			count=i;
			count1++;
			}
		}
		
	if(count1!=0){
		printf("%d\n", count);
		}
	else{printf("-1\n");}	
	}
