#include<stdio.h>

int main(){
	int array[1000][1000], i, j, n, k, temp;
	int diagonal1=0, diagonal2=0;	

	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &array[i][j]);
		}
	}
	j=n-1;
	for(i=0;i<n;i++){
		temp = array[i][i];
		diagonal1+=temp;
		diagonal2+=array[j][i];
		array[i][i] = array[j][i];
		array[j][i] = temp;
		j--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", array[i][j]);
			if(j!=n-1){printf(" ");}
		}
		printf("\n");
	}
	printf("Jumlah diagonal 1: %d\n", diagonal1);
	printf("Jumlah diagonal 2: %d\n", diagonal2);
}
