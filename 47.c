#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	int n, i, x; 
	float angka[10000]={0};
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &x);
		angka[x]++;
		}
	for(i=0;i<10000;i++){
		if(angka[i]!=0){
			printf("%d %.2f\n",i, (float)angka[i]/n);
			}
		}
	
	
	}
