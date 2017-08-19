#include<stdio.h>
int main(){
  int angka[100][100], i,j, m, n;

  scanf("%d %d", &m, &n);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d", &angka[i][j]);
    }
  }
  int kali;
  scanf("%d", &kali);

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d", kali*angka[i][j]);

      if(j!=n-1){
        printf(" ");
      }
    }
    printf("\n");
  }

}
