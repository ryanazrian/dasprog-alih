#include<stdio.h>
#include<string.h>

int main(){
	int i, j, poin, angka[1000][1000], n[100];
	
	for(i=1;i<=5;i++){
		scanf("%d", &n[i]);
		for(j=0;j<n[i];j++){
			scanf("%d", &angka[i][j]);
		}
	}
	for(i=1;i<=5;i++){
		poin=0;
		for(j=0;j<n[i]-1;j++){
			if(angka[i][j]>angka[i][j+1]){
				poin--;
			}
			else if(angka[i][j]<angka[i][j+1]){
				poin++;
			}
		}
		printf("%d\n", poin);
	}

}
