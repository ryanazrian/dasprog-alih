#include<stdio.h>

int main(){
	int m, n, angka[100][100], i, j;
	
	scanf("%d %d", &m, &n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &angka[i][j]);
			}
		}
	int count;
	for(j=0;j<n;j++){
		count=0;
		for(i=0;i<n;i++){
			if(angka[i][j]!=0){
				count++;
				}
			}
			printf("%d", count);
			if(j!=n-1){printf(" ");}
		}
	
	
	}
