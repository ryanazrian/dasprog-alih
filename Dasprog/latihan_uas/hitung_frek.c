#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[1000];
	int i, j, asci[1000]={0};

	fgets(str, sizeof(str), stdin);
	for(i=0;;i++){
		if(str[i]=='\n'){
			str[i]=='\0';
			break;
		}
	}
	for(i=0;i<strlen(str);i++){
		str[i] = tolower(str[i]);
	}
	for(i=0;i<strlen(str);i++){
		asci[(int)str[i]]++;
	}

	for(i=0;i<255;i++){
		if(asci[i]!=0 && isalpha(i)){
			printf("%c: %d\n", i, asci[i]);
		}
	}
}
