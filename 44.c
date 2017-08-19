#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char string[10000], sama[10000];
	int i, j=0;
	
	scanf("%s", string);
	
	for(i=strlen(string)-1;i>=0;i--){
		sama[j++] = string[i];
		}
	if(strcmp(string, sama)==0){
		printf("SAMA\n");
		}
	else{
		printf("TIDAK SAMA\n");
		}
	
	}
