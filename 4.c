#include<stdio.h>

int main(){
	int n, a,b,c, i, counter=0;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		scanf("%d %d %d", &a, &b, &c);
		
		if(a>0 && b>0 && c==a%b){
			counter++;
			}
		}
	
	printf("%d\n", counter);
	}
