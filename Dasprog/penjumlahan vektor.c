#include<stdio.h>

int main(){
    int n, vektor1[80], vektor2[80], i;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &vektor1[i]);

    }

    for(i=0;i<n;i++){
        scanf("%d", &vektor2[i]);

    }

    for(i=0;i<n;i++){
        printf("%d", vektor1[i]+vektor2[i]);

        if(i!=n-1){
            printf(" ");


        }


    }



}

