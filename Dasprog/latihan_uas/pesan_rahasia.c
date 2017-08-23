#include<stdio.h>
#include<string.h>

int main(){
	char str[1000], array[1000][1000];
	int i, j, k;

	fgets(str, sizeof(str), stdin);
	for(i=0;;i++){
		if(str[i]=='\n'){
			str[i] = '\0';
			break;
		}
	}
	int n;
	scanf("%d", &n);
	int panjang = strlen(str)/n;
	k=0;
	for(i=0;i<=panjang;i++){
		for(j=0;j<n;j++){
			array[i][j] = str[k++];	
		}
	}
	for(i=0;i<=panjang;i++){
		for(j=n-1;j>=0;j--){
			printf("%c", array[i][j]);
		}
	}
	printf("\n");
}
