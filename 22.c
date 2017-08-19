#include<stdio.h>

int main(){
	int matrix[1001][1001], i, j, m, n;
	
	scanf("%d %d", &m, &n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}
	for(i=0;i<m;i++){
		for(j=n-1;j>=0;j--){
			printf("%d", matrix[i][j]);
			if(j!=0){printf(" ");}
			}
			printf("\n");
		}
}
