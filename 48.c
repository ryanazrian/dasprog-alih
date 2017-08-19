#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *string, tanda='A';
	int i, n, a=0, b=0, c=0, total, d=0, j, cek=0;
	
	scanf("%d", &n);
	string = (char*) malloc(n*sizeof(char));
	
	for(i=0;i<n;i++){
		scanf("%s", string);
		tanda=0;
		cek=0;
		a=0;
		b=0;c=0;d=0;
		for(j=0;string[j]!=0;j++){
			if(isupper(string[j])){
				a=1;
				}
			else if(islower(string[j])){
				b=1;
				}
			else if(isdigit(string[j])){
				c=1;
				}
			else if(ispunct(string[j])){
				d=1;
				if(tanda!=string[j]){
					cek++;
					tanda=string[j];
					}
				}
			}
			total = a+b+c+d;
			if(total<=2){
				printf("TERLALU MUDAH\n");
				}
			else if(total==4 && cek>=2){
				printf("TERLALU SULIT\n");
				}
			else{
				printf("BAGUS\n");
				}
		
		
		}
	
}
