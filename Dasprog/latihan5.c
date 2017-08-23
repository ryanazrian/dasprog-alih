#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int words(char sentence[ ]){
	int count=0, inword = 0;
	char* it = sentence;

	
	do switch(*it){
		case '\0':
		case '\n':
		case '\r':
		case '\t':
		case ' ':
		if(inword){inword = 0; count++;}
		break;
		default: inword=1; 

	}while(*it++);
	return count;
}

int main(){
	FILE *f1, *f2;
	int i, j;
	char str[1000];

	f1 = fopen("data5.txt", "r");
	f2 = fopen("data5w.txt", "a+");

	while(!feof(f1)){
		fgets(str, sizeof(str), f1);
		if(!feof(f1))fprintf(f2, "%d\n", words(str));
		if(!feof(f1))printf("%d\n", words(str));
	}


}
