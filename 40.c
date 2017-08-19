#include<stdio.h>

int main(){
	int n, matrix[1000][1000], i, j, temp, sum1=0, sum2=0;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}
	j=n-1;	
	for(i=0;i<n;i++){
		temp = matrix[i][i];
		matrix[i][i] = matrix[j][i];
		matrix[j][i] = temp;
		j--;
		}
	j=n-1;
	for(i=0;i<n;i++){
		sum1+=matrix[i][i];
		sum2+=matrix[j--][i];
		}	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", matrix[i][j]);
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
	printf("Jumlah diagonal 1: %d\n",sum1);
	printf("Jumlah diagonal 2: %d\n",sum2);
	
	}
