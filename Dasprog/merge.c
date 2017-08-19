#include<stdio.h>

int main(){
    int angka[100], i, j, count=0;

    for(i=0;;i++){
        scanf("%d", &angka[i]);
        count++;
        if(angka[i]==-9){break;}
    }

    for(i;;i++){
        scanf("%d", &angka[i]);

        if(angka[i]==-9){break;}
        count++;
    }

    int temp;

    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(angka[i]>angka[j]){
                temp = angka[j];
                angka[j] = angka[i];
                angka[i] = temp;
            }
        }
    }

    for(i=0;i<count;i++){
        if(angka[i]!=-9){
            printf("%d ", angka[i]);
        }


    }

}
