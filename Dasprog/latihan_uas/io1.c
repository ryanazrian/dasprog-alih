#include<stdio.h>

int main(){
	FILE *f1;
	char str[1000];
	int i;	
	f1= fopen("write.txt", "a");
		fgets(str, sizeof(str), stdin);
		fprintf(f1, "%s", str);
}
