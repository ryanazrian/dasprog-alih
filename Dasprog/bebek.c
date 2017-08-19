#include<stdio.h>

int main(){
    int kelas[100];
    float x, y;


    scanf("%d %d %d %d", &kelas[0], &kelas[1], &kelas[2], &kelas[3]);
    scanf("%f %f", &x, &y);

    float total=0;
    int i;

    for(i=0;i<4;i++){
        total+=(float)x*kelas[i];
        x+=y;
    }
    printf("%.2f\n", total);


}
