#include<stdio.h>
int main(){
    int a, b, i;

    scanf("%d %d", &a, &b);
    for(i=a+1;i<b;i++){
        if(i%3==0 || i%5==0){
            printf("%d\n", i);
        }

    }


}
