#include<stdio.h>

void putar(int m, int n, int a[m][n], int b[m][n]){
	int i, j;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i] = a[i][j];
			}
		}
	
	
	}
	
int main(){
	int m, n, a[100][100], b[100][100], i, j;
	
	scanf("%d %d", &m, &n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			}
		}
		
		putar(m, n, a, b);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d", b[j][i]);
			if(j!=m-1){printf(" ");}
			}
			printf("\n");
		}
	
	}
