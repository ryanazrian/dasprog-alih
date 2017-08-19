#include<stdio.h>
int main(){
    int angka[50], i, n;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &angka[i]);
    }
    int j, count=0;
    scanf("%d", &j);

    for(i=0;i<n;i++){
        if(angka[i]==j){
            count++;
        }

    }
    printf("%d", count);
}
