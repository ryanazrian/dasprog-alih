#include<stdio.h>

int main(){
int n, i, a[100], max=0, min=0;
float hasil, sum=0;

scanf("%d", &n);

for(i=0;i<=n-1;i++){
    scanf("%d", &a[i]);
    sum+=a[i];
}
    hasil=(sum/n)*1.0;

for(i=0;i<=n-1;i++){
    if(a[i]>hasil){
        max++;

    }

    else{min++;}

}

printf("%.2f %d %d\n", hasil, max, min);
}
