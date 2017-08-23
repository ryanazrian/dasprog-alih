#include<stdio.h>
#include<string.h>

int main(){
	char str[1000], *ptr;

	scanf("%[^\n]s", str);
	ptr = strtok(str, ",");
	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strtok(NULL, ",");
	}
	
}
