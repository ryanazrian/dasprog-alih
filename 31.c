#include<stdio.h>

int matrix[2064][2064];
int main(){
    int m,n, i, j, a,b;

    scanf("%d %d", &m, &n);



    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(n%2!=0){
        a = (n/2)+1;
    }
    else{ a=(n/2)+1;}

    int count=0, nol=0;
    b=a-2;
    for(i=0;i<m;i++){
            count=0;
            nol=0;
            b=a-2;
        for(j=a-1;j<n;j++){
            if(n%2!=0 && count==0){
            printf("%d", matrix[i][j]);
            count++;
            }
            else{
                printf("%d", matrix[i][j]+matrix[i][b--]);
            }

            if(j!=n-1){printf(" ");}
        }
        printf("\n");
    }

}
