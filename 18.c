
#include<stdio.h>

int main(){
	int matrix[1002][1002], i, j, m, n;
	
	scanf("%d %d", &m, &n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			}
		}	
	
	int kali;
	scanf("%d", &kali);
		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d", matrix[i][j]*kali);
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
}

