#include<stdio.h>
int main(){
	int a, i;
	char cetak[100];
	
	for(i=0;cetak[i-1]!='\n';i++){
		scanf("%c", &cetak[i]);
		}
		
	for(;i!=-1;){
		scanf("%d", &i);
		
		if(i!=-1){
			printf("%c", cetak[i]);
			}
		
		}
	
	}
