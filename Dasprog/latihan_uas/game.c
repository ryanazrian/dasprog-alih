#include<stdio.h>

int main(){
	int poin, i, j, n[100], angka[1000][1000];
	for(i=1;i<=5;i++){
		scanf("%d", &n[i]);
		for(j=1;j<=n[i];j++){
			scanf("%d", &angka[i][j]);
		}
	}
	for(i=1;i<=5;i++){
	poin=0;
		for(j=1;j<n[i];j++){
			if(angka[i][j]>angka[i][j+1]){
			poin--;
			}
			else if(angka[i][j]<angka[i][j+1]){
			poin++;
			}
			else if(angka[i][j]==angka[i][j+1]){
			poin+=0;
			}
		}
			printf("%d\n", poin);
			if(poin>0){
                        printf(":)\n");
                        }
                        else if(poin<0){
                        printf(":(\n");
                        }
                        else if(poin==0){printf(":|\n");}

	}
}
