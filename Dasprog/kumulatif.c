#include<stdio.h>

int main(){
    int n , matrix[100], i, jumlah=0;


    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &matrix[i]);
    }

    int k;
    scanf("%d", &k);

    for(i=0;i<k;i++){
        jumlah+=matrix[i];

    }
    printf("%d\n", jumlah);

}
