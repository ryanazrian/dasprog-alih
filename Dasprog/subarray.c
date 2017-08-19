#include<stdio.h>

int main(){
	int angka[100000], i, n, a,b, j;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		scanf("%d", &angka[i]);
		}
	
	scanf("%d %d", &a, &b);
	
	if(a<b){
		for(j=a;j<=b;j++){
			if(j<=n){
				printf("%d\n",angka[j]);
				}
			else{printf("-\n");}
			}
		
		}
		
	else{
		for(j=a;j>=b;j--){
			if(j<=n){
				printf("%d\n", angka[j]);
				}
			else{printf("-\n");}
			}
		}
	
}
