#include<stdio.h>

int main(){
	int array[1000][1000];
	int i, j, m, n, angka=1;;

	scanf("%d %d", &m, &n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			for(j=m;j>=1;j--){
				if(angka%10==0){angka+=1;}
				array[j][i] = angka%10;
				angka++;
			} 
		}
		else{
			for(j=1;j<=m;j++){
				if(angka%10==0){angka+=1;}
				array[j][i] = angka%10;
				angka++;
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
