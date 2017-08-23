#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f1, *f2;
	char str[1000];
	
	f1 = fopen("data1.txt", "r");
	f2 = fopen("data1w.txt", "a+");
	while(!feof(f1)){
		fgets(str, sizeof(str), f1);
		if(!feof(f1)) fprintf(f2, "%s", str);
	}
}
