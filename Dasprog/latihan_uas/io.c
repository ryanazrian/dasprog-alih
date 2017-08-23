#include<stdio.h>

int main(){
	FILE *p1;
	int i, j, n;
	char str[1000];
	
	p1 = fopen("data.txt", "r");
		while(!feof(p1)){
			fgets(str, sizeof(str), p1);
			if(!feof(p1))printf("%s", str);
		}

}
