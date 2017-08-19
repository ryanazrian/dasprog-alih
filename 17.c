#include<stdio.h>
#include<stdlib.h>

int main(){
	int matrix[1002][1002], matrix1[1002][1002], i, j, m, n;
	
	scanf("%d %d", &m, &n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}
		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix1[i][j]);
			}
		}	
		
		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d", abs(matrix[i][j]-matrix1[i][j]));
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
}

