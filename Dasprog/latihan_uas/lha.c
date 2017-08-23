#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10000], balik[10000];
	int i, j=0, n;
	
	scanf("%s", str);
	for(i=strlen(str)-1;i>=0;i--){
		balik[j++] = str[i];
	}
	if(strcmp(str, balik)==0){
		printf("SAMA\n");
	}
	else{
		printf("TIDAK SAMA\n");
	}
}

