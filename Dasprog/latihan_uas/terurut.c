#include<stdio.h>

int main(){
	int array[100][100], n , i, j, m, k=1;
	
	scanf("%d %d", &m, &n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			for(j=0;j<m;j++){
				array[j][i] = k%10;
				k++;
			}
		}
		else{
			for(j=m-1;j>=0;j--){
				array[j][i] = k%10;
				k++;
			}
		}
	}

	for(i=0;i<m;i++){
		for(j=1;j<=n;j++){
			printf("%d", array[i][j]);
		}
		printf("\n");
	}

}
