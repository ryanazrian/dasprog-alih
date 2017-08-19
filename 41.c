#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char string[10000], balik[1000][1000];
    int i, j, n, k=0, count=0, panjang;
     
    fgets(string, 100000, stdin);
    for(i=0;;i++){
        if(string[i]=='\n'){
            string[i]='\0';
            break; 
            }
        }
    scanf("%d", &n);
    panjang = strlen(string)/n;
     
   
        for(i=0;i<=panjang;i++){
            for(j=0;j<n;j++){
                if(string[k]>0){
                balik[i][j] = string[k++];
                count++;
                }
            }
        }
  
     
     
    for(i=0;i<=panjang;i++){
        for(j=n-1;j>=0;j--){
            if(balik[i][j]>0 && isprint(balik[i][j]))
            printf("%c", balik[i][j]);
            }
        }
    printf("\n");
    }

