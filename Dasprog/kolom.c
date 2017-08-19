#include<stdio.h>
int main(){
    int m, n, a,b, i, j;
    int isi[100][100];

    scanf("%d %d", &m, &n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &isi[i][j]);

        }


    }

    int cari;
    scanf("%d", &cari);

for(i=0;i<m;i++){
    printf("%d\n", isi[i][cari] );


}

}
