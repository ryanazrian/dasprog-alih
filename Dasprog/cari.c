#include<stdio.h>
int main(){
  int angka[100], i, count=0;

  for(i=0;;i+=2){
      scanf("%d",&angka[i]);
      count++;
    if(angka[i]==-9){break;}
  }
  for(i=1;;i+=2){
      scanf("%d",&angka[i]);
      count++;
    if(angka[i]==-9){break;}
  }
int j;
for(j=0;j<=count;j++){
  if(angka[j]<angka[j+1] && angka[j]!=-9){
    printf("%d", angka[j]);
  }

  if(j!=i){
	  printf(" ");
	  }
  else{printf("\n");}

}
printf("%d\n",i );
}
