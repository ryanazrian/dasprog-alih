#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str[10000], hasil[10000];
	int i, j, n;
	
	scanf("%s", str);
	j=0;
	for(i=strlen(str);i>=0;i--){
		hasil[j++] = str[i]; 
	}
	if(strcmp(str, hasil)==0){
		printf("SAMA\n");
	}
	else{printf("BEDA\n");}

}
