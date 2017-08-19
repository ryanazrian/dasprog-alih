#include<stdio.h>

int main(){
	int i, j, n,k, angka, poin;
	
	for(i=1;i<=5;i++){
		scanf("%d", &n);
		poin=0;
		for(j=1;j<=n;j++){
			scanf("%d", &k);
			if(j!=1){
				if(k>angka){
					poin++;
					}
				else if(k<angka){
					poin--;
					}
				}
			angka=k;
			}
		if (poin>0){
			printf(":)\n");
			}
		else if(poin<0){
			printf(":(\n");
			}
		else if(poin==0){
			printf(":|\n");
			}
		}
		
	
	}
