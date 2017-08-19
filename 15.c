#include<stdio.h>
#include<stdlib.h>

int main(){
    int matrix1[100][100], matrix2[100][100], i, j, m, n, k, l;

    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &k, &l);
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matrix1[i][j]==matrix2[0][0] && matrix1[i+k-1][j+l-1]==matrix2[k-1][l-1]){
                printf("%d %d\n", i, j);
            }
        }
    }


}
