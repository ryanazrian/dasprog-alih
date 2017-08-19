#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
    double jari;
    double volume, empat=4, tiga=3;

    scanf("%lf", &jari);

    volume = (empat/tiga)*pi*pow(jari,3);

    printf("%.1lf\n", volume);


}
