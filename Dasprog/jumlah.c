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
	int pembilang1, penyebut1, pembilang2, penyebut2, pembilang;
	
	
	scanf("%d %d", &pembilang1, &penyebut1);
	scanf("%d %d", &pembilang2, &penyebut2);
	
	int penyebut;
	penyebut = penyebut1*penyebut2;
	
	pembilang = ((penyebut/penyebut1)*pembilang1)+((penyebut/penyebut2)*pembilang2);
	
	int penyebutfix, fix, pembilangfix;
	fix = fpb(pembilang, penyebut);
	
	penyebutfix = penyebut/fix;
	pembilangfix = pembilang/fix;
	
	printf("%d %d\n", pembilangfix, penyebutfix);
	
	}
