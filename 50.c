#include<stdio.h>

int main(){
	int m, n, i, j;
	int array[1000][1000], k=1;
	
	scanf("%d %d", &m, &n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			for(j=m;j>=1;j--){
				array[j][i] = k%10;
				k++;
				}
			}
		else{
			for(j=1;j<=m;j++){
				array[j][i] = k%10;
				k++;
				}
			}
		}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d", array[i][j]);
			}
		printf("\n");
		}
	
	
	}
