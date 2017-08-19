#include<stdio.h>
#include<math.h>

int main(){
    int n, a, matrix[100], i;


    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &matrix[i]);


    }
    int k;
    scanf("%d", &k);

    printf("%d\n", abs(matrix[k-1]-matrix[k]));


}
