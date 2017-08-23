#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	int i, j, n;

	scanf("%[^\n]s", str);
	for(i=0;i<strlen(str);i++){
		if(str[i]==' '){
			for(j=i;j<strlen(str);j++){
				str[j] = str[j+1];
			}
		}
	}
	printf("%s\n", str);
}
