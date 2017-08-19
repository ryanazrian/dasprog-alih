#include<stdio.h>
 
 
int matrix[2055][2055];
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
    else{ a=(n/2);}
 
    int count=0, nol=0;
    b=n-1;
    for(i=0;i<m;i++){
            count=0;
            nol=0;
            b=n-1;
        for(j=0;j<a;j++){
            if(n%2!=0 && j==a-1){
            printf("%d", matrix[i][a-1]);
            count++;
            }
            else{
                printf("%d", matrix[i][j]+matrix[i][b--]);
            }
 
            if(j!=a-1){printf(" ");}
        }
        printf("\n");
    }
 
}
