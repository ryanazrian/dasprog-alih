#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char string[100000];
	int i, j, angka[100000]={0};
	
	scanf("%[^\n]s", string);
	
	for(i=0;i<strlen(string);i++){
		string[i] = tolower(string[i]);
		}
	for(i=0;i<strlen(string);i++){
		angka[(int)string[i]]++;
		}
	for(i=0;i<255;i++){
		if(angka[i]!=0 && isalpha(i)){
			printf("%c: %d\n", i, angka[i]);
			}
		}
	
	}
