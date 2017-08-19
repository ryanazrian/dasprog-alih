#include<stdio.h>
#include<math.h>

int main(){
    int jam1, menit1, detik1, jam2, menit2, detik2;

    scanf("%d %d %d", &jam1, &menit1, &detik1);
    scanf("%d %d %d", &jam2, &menit2, &detik2);

    int hasil1, hasil2;
    hasil1=(jam1*3600+menit1*60+detik1);
    hasil2 =(jam2*3600+menit2*60+detik2);

    printf("%d\n", abs(hasil1-hasil2));




}
