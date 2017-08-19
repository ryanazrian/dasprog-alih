#include<stdio.h>

int main(){
	int a, b, counter1=0, counter2=0;
	float c;
	
	while(a!=-99){
		scanf("%d", &a);
		
		if(a!=-99){
			scanf("%d %f", &b, &c);
			if(c==(float)a/b){
				counter2++;
				}
				counter1++;
			}
		}
	printf("%d %d\n", counter1, counter2);
	
	
	}
