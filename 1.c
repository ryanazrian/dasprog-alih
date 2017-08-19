#include<stdio.h>
#include<stdlib.h>

int main(){
	int  a,b, counter=0, terbesar=0, hasil;
	
	

	while(a!=-99){
		scanf("%d", &a);
		
		if(a!= -99){
			scanf("%d", &b);
			counter++;
			
			hasil = abs(a-b);
			
			if(hasil>terbesar){
				terbesar=hasil;
				}
			}
		
		}
	printf("%d %d\n",counter, terbesar);
	
	}
