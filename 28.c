#include<stdio.h>
int main(){
	int matrix[100][100], i, j, n;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}
	int temp;
	for(j=0;j<n;j++){
		temp = matrix[0][j];
		matrix[0][j] = matrix[n-1][j];
		matrix[n-1][j] = temp;
		}
	
	for(i=0;i<n;i++){
		temp = matrix[i][0];
		matrix[i][0] = matrix[i][n-1];
		matrix[i][n-1] = temp;
		}
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", matrix[i][j]);
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
}
