#include<stdio.h>

int main(){
    int i, j, k, n, x, angka[100], temp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &angka[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(angka[i]>angka[j]){
                temp = angka[j];
                angka[j]=angka[i];  // i -2 -2 -2 4  5
                                    // j -2 -2 -2 4  5
                angka[i]= temp;
            }
        }
    }
    int count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(angka[i]==angka[j]){
                count++;
            }
        }
         if(angka[i]!=angka[i-1]){
            printf("%d(%d)\n", angka[i], count);
        }
    }
    return 0;
}
