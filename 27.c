#include<stdio.h>

int main(){
	int matrix[100][100], n, i, j;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}
	
	int temp;
	j=n-1;
	for(i=0;i<n;i++){
		temp= matrix[i][j];
		matrix[i][j] = matrix[i][i];
		matrix[i][i] = temp;
		j--;
		}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", matrix[i][j]);
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
	}
