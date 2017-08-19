#include<stdio.h>

int main(){
int a, n, count=0;

while(n!=-9){
    scanf("%d", &n);
    if(n!=-9){

        if(a==n || count==0){
            count++;
            a=n;
        }

        else{
        printf("%d(%d)\n", a, count);
        count=0;
        }

    }

}


}
