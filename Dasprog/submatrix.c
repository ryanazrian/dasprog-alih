#include<stdio.h>
int main(){
  int angka[80][80], m, n, i, j, baris1, baris2, kolom1, kolom2;

  scanf("%d %d", &m, &n);

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d", &angka[i][j]);
    }
  }
  scanf("%d %d %d %d", &baris1, &baris2, &kolom1, &kolom2);

  for(i=baris1;i<=baris2;i++){
    for(j=kolom1;j<=kolom2;j++){
      printf("%d", angka[i][j]);
      if(j!=kolom2){
        printf(" ");
      }
      else{printf("\n");}
    }
  }
}
