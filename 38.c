#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
 

int main(){
    int a=0, b=0, c=0,d=0, i,j, hasil, angka=0;
    int n;
	char *string;
	
	string = (char*) malloc(10000*sizeof(char));
	
    scanf("%d", &n);
    for(j=1;j<=n;j++){
    scanf("%s", string);
    angka=0;
    a=0;b=0;c=0;d=0;
 
    for(i=0;string[i]!=0;i++){
         if( islower(string[i])){
          a=1;
         }
         else if(isupper(string[i])){
            b=1;
         }
         else if(isdigit(string[i])){
            c=1;
            angka++;
         }
         else{d=1; 
			}
    }
    hasil = a+b+c+d;
    if(hasil<=2){
        printf("TERLALU MUDAH\n");
    }
 
    else if(hasil==3){
        printf("BAGUS\n");
    }
    else{printf("TERLALU SULIT\n");}
}
}
