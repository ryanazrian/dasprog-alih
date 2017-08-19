#include<stdio.h>

int main(){
int m, n, i, j, k, d, count=0;

scanf("%d %d", &m, &k);

for(i=1;i<=m;i++){
    for(j=1;j<=k;j++){
        scanf("%d", &n);
        if(n!=-9){
            printf("%d ", n);
        }
        else{break;}


    }
if(n!=-9){
printf("\n");
}
else{break;}
}



if(n==-9){
for(i;i<=m;i++){
        if(count==0){d=j;count++;}
        else{d=1;}
    for(j=d;j<=k;j++){
        printf("0 ");
            }
  printf("\n");
        }
    }

}
