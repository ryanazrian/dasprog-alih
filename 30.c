#include<stdio.h>

int main(){
    int  i, j, n, genap=0, ganjil=0;

    scanf("%d", &n);

    int matrix[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(matrix[i][j]%2==0){
                 printf("genap");
                 genap+=matrix[i][j];
                }
                else{
                    printf("ganjil");
                    ganjil+=matrix[i][j];
                }
            }
            else{printf("%d", matrix[i][j]);}

            if(j!=n-1){printf("\t");}
        }
        printf("\n");
    }
    printf("\n");
    printf("Penjumlahan elemen ganjil:%d\n", ganjil);
    printf("Penjumlahan elemen genap:%d\n", genap);



}
