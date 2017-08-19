#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int count=0, i, j, panjang;
    char a[2000], b[2000], c[2000];




    scanf("%s ", &a);
    scanf("%s", &b);

    panjang=strlen(a);

    for(i=0;i<panjang;i++){
        c[i]= tolower(a[i]);
        }

    for(i=0;i<panjang;i++){
        b[i]= tolower(b[i]);
        }

    for(i=0;i<panjang;i++){
        if(c[i]!=b[i]){
            count++;
            }
        }

    if(count!=0)
    printf("%d\n", count);

    else{
        printf("%s\n", a);
        }
    }
