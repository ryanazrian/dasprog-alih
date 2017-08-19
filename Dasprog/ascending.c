#include<stdio.h>

int main(){
    int angka1[100], angka2[100], i, j, temp;
    int  n, count1=0, count2=0;

   for(i=0;;i++){
    scanf("%d", &angka1[i]);
    count1++;
    if(angka1[i]==-9){break;}
   }
   for(i;;i++){
    scanf("%d", &angka1[i]);
    if(angka1[i]==-9){break;}
    count1++;
   }
   for(i=0;i<count1;i++){
        for(j=i+1;j<count1;j++){
            if(angka1[i]>angka1[j]){
                temp=angka1[j];
                angka1[j]=angka1[i];
                angka1[i]=temp;
            }
        }
   }
   for(i=0;i<count1;i++){
    if(angka1[i]!=-9)
    printf("%d ", angka1[i]);
   }
}
