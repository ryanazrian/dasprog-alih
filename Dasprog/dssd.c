#include<stdio.h>
#include<stdlib.h>
int main()
{
    //ARRAY 1
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //ARRAY 2
    int k,l;
    scanf("%d %d",&k,&l);
    int b[k][l];
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }

    //PROSES
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[0][0]==a[i][j]){
                int baris=i,x,y;
                for(x=0;x<k;x++){
                    int kolom=j;
                    int truee=1;
                    for(y=0;y<l;y++){
                        if(b[x][y]!=a[baris][kolom++]){
                            truee=0;
                            break;
                        }
                        if(x==k-1 && y==l-1){
                            printf("%d %d\n",i,j);
                        }
                    }
                    baris++;
                    if(truee==0){
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
