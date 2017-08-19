#include<stdio.h>

int main(){
    int m, n, i, j, k;


    scanf("%d %d", &m, &n);

    int max=0, min=100, min1, min2, max1, max2;

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d", &k);
            if(k>=max){
                max=k;
                max1=i;
                max2=j;

            }
            if(k<=min){
                min=k;
                min1=i;
                min2=j;

            }


        }



    }
  printf("%d %d\n", min1, min2);
    printf("%d %d\n", max1, max2);

}
