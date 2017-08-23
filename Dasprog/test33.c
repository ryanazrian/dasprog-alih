#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i, j, count;
	char str[1000];
	int n;

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%[^\n]s", str);
		count=0;
		for(j=0;strlen(str);j++){
			if(str[j]=='\0'|| str[j]=='\n'|| str[j]==' ' ){
				count++;
			}
		}
	printf("%d\n", count);
	}
}
