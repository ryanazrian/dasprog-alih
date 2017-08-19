#include<stdio.h>

int main(){
int a, b, c,t, fix;

while(a!=-9){
        scanf("%d", &a);
    if(a!=-9){
        scanf("%d %d", &b, &c);

        while(b!=0){
            t=a%b;
            a=b;
            b=t;
        }
        fix=a+c;
        printf("%d\n", fix);
    }
    else{break;}

}



}
