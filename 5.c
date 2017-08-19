#include<stdio.h>

int main(){
	int i, n, angka, hasil[100];
	char kata[80];
	
	for(i=0;kata[i-1]!='\n';i++){
		scanf("%c", &kata[i]);
		}
		
	
	i=0;
	for(;angka!=-1;){
		scanf("%d", &angka);
		
		if(angka!=-1)
		printf("%c", kata[angka]);
		}
	printf("\n");
	}
