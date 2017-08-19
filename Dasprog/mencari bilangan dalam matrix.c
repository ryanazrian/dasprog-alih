#include<stdio.h>

int main(){
    int n, matrix[100], i, cari;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &matrix[i]);

    }
    scanf("%d", &cari);

    int fix, count=0;
    for(i=0;i<n;i++){
            if(cari==matrix[i]){

             fix=i;
             count++;
            }


    }
    if(count==1){
        printf("%d\n", fix);

    }
    else{
        printf("-\n");

    }
}
