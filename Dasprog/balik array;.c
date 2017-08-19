#include<stdio.h>

int main(){
    int n, matrix[100], i;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &matrix[i]);

    }


    for(i=n-1;i>=0;i--){
        printf("%d", matrix[i]);

        if(i!=0){printf(" ");}

    }



}
