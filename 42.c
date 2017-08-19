#include<stdio.h>

struct balok {
   double panjang;
   double lebar;
   double tinggi;
};

typedef struct balok balok;

int main(){
	balok dt[100000];
	int i, n, temp, count=0;
	int angka[100000]={0};
	double total=0;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		scanf("%lf %lf %lf", &dt[i].panjang, &dt[i].lebar, &dt[i].tinggi);
		}
	
	for(i=1;;i++){
		scanf("%d", &temp);
		if(temp==-9){
			break;
			}
		else{
			angka[i] = temp;
			count++;
			}
		
		}
		
	for(i=1;i<=count;i++){
		total+=dt[angka[i]].panjang*dt[angka[i]].lebar*dt[angka[i]].tinggi;
		}
	printf("%.4lf\n", (double)total/count);
	
	
	}
