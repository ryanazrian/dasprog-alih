#include<stdio.h>
int main(){
	int array[1000][1000], temp, m, n, i, j, tukar1, tukar2;
	
	scanf("%d %d %d %d", &m, &n, &tukar1, &tukar2);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &array[i][j]);
			}
		}
	for(i=0;i<n;i++){
		temp = array[tukar2-1][i];
		array[tukar2-1][i] = array[tukar1-1][i];
		array[tukar1-1][i] = temp;
		}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d", array[i][j]);
			if(j!=n-1){printf(" ");}
			}
			printf("\n");
		}
	}
