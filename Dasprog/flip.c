#include<stdio.h>

int main(){
    int m, n, matrix[100][100], i, j;

    scanf("%d %d", &m, &n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);

        }


    }

    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            printf("%d", matrix[i][j]);

            if(j!=0){
                printf(" ");

            }

        }
        printf("\n");
    }

}
