#include<stdio.h>
  
int main(){
    int matrix1[1000][1000], matrix2[1000][1000], koordinat1[100], koordinat2[100], i, j, m, n, k,l, count=0;
      
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
      
    int y=0, z, a=0, b=0;
    for(i=0;i<m;i++){
        z=0;
        for(j=0;j<n;j++){
            if(matrix1[i][j]==matrix2[0][0] && matrix1[i+k-1][j+l-1]==matrix2[k-1][l-1]){
                    koordinat1[a++] = i;
                    koordinat2[b++] = j;
                 
                }
            }
        }
      
        printf("%d %d\n", koordinat1[0], koordinat2[0]);
    }

