#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char str[1000], tanda= 'A';
	int i, j, n, count=0, a=0, b=0,c=0, d=0;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%s", str);
		a=0;b=0;c=0;d=0, count=0, tanda = 0;
		for(j=0;j<strlen(str);j++){
			if(isupper(str[j])){
				a=1;
			}
			else if(islower(str[j])){
				b=1;
			}
			else if(isdigit(str[j])){
				c=1;
			}
			else if(ispunct(str[j])){
				d=1;
				if(str[j]!=tanda){
					count++;
					tanda= str[j];
				}
			}
		}
	int total = a+b+c+d;
	if(total<=2){
		printf("TERLALU MUDAH\n");
	}
	else if(total==4 && count>=2){
		printf("TERLALU SULIT\n");
	}
	else{
		printf("MUDAH\n");
	}
	}


}
