#include<stdio.h>

int main(){
int i,n, a[100], j, tmp;

scanf("%d", &n);

for(i=0;i<=n-1;i++){
    scanf("%d", &a[i]);


}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            tmp =a[j];
            a[j]=a[i];
            a[i]=tmp;

        }


    }

}


int count=0;

for(i=0;i<=n-1;i++){
        count=0;
    for(j=0;j<=n-1;j++){
        if(a[i]==a[j]){
            count++;

        }

    }
    if(a[i]!=a[i-1]){
    printf("%d ada %d\n", a[i], count);
    }
}


}
