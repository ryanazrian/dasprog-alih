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
	int a,b,c, counter1=0, counter2=0;
	
	while(a!=-99){
		scanf("%d", &a);
		if(a!=-99){
			scanf("%d %d", &b, &c);
				counter1++;
			if(a>=0 && b>=0 && c>=0 && c==fpb(a,b)){
				counter2++;
				
				}
			
			}
		
		}
	
	printf("%d %d\n", counter1, counter2);
	}
