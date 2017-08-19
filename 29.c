#include<stdio.h>
int main(){
	int n, i, j;
	
	scanf("%d", &n);
	
	int matrix1[1000][1000];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix1[i][j]);
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j){
				matrix1[i][j] = matrix1[i][j] + matrix1[j][i];
				}
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j){
			printf("%d", matrix1[i][j]);
			if(j!=n-1){printf(" ");}
			}
			else{printf("0");if(j!=n-1){printf(" ");}}
		}
			printf("\n");
		}
	}


