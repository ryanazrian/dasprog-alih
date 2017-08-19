#include<stdio.h>

int main(){
    int nilai, k=0;
    char a[2001];
char matrix[101][101];


    scanf("%s %d", &a, &nilai);


    int i, j;
    for(i=1;i<=nilai;i++){
        if(i%2!=0){
        for(j=1;j<=nilai;j++){
                if(a[k]>0){
                matrix[i][j]=a[k];
                k++;
            }
                else{matrix[i][j]='.';}
            }
        }

        else{
        for(j=nilai;j>=1;j--){
                if(a[k]>0){
                matrix[i][j]=a[k];
                k++;
            }
                else{matrix[i][j]='.';}
            }
        }
    }

    for(i=1;i<=nilai;i++){
        for(j=1;j<=nilai;j++){
            printf("%c", matrix[j][i]);
            }
        }
          printf("\n");
    }
