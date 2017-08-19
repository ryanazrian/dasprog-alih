#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char string[10000];
	int i, j, n;
	
	scanf("%[^\n]s", string);
	
	if(strlen(string)>160){
		printf("SMS TIDAK BISA DIKIRIM KARENA LEBIH DARI 160 KARAKTER\n");
		}
	else{
	
	for(i=0;i<strlen(string);i++){
		if(string[i]==' '){
			string[i+1] = toupper(string[i+1]);
			for(j=i;j<strlen(string);j++){
				string[j] = string[j+1];
				}
			}
		}
	printf("%s\n", string);	
}
	}
