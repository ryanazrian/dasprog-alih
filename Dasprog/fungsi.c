#include<stdio.h>
int fpb(int a, int b){
int t;

while(b!=0){
    t=a%b;
    a=b;
    b=t;
}

return a;
}


int main(){
int a, b, c, hasil;

while(a!=-9){
    scanf("%d", &a);
    if(a!=-9){
        scanf("%d %d", &b, &c);
        hasil=fpb(a,b)+c;
     printf("%d\n", hasil);
    }
    else{break;}
}


}
