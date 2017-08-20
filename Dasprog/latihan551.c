#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *f1, *f2;
	int i, j, count=0;
	char str[1000], prevchar='\0';

	f1 = fopen("data5.txt", "r");
	f2 = fopen("data55.txt", "a+");


	while(!feof(f1)){
		fgets(str, sizeof(str), f1);
		
		for(i=0;str[i]>0;i++){
			if(str[i]==' '||str[i]=='\n'||str[i]=='\t'||str[i]=='0'||str[i]=='\r'){
				if(prevchar !=' '&& prevchar!='\n'&&prevchar!='\t'&&prevchar!='\0'){
					count++;
				}
			}
			prevchar = str[i];
		}
	if(!feof(f1)) printf("%d\n", count/2);
	}
	fprintf(f2, "%d\n", count/2);
	fclose(f1);
	fclose(f2);
}
