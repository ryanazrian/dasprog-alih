#include<stdio.h>

void hapuschar(char str[], char t){
	int i, j;
	for(i=0;i<strlen(str){
		if(str[i]==t){
			for(j=i;j<strlen(str);j++){
				str[j] = str[j+1];
			}
		}	
	}
}
