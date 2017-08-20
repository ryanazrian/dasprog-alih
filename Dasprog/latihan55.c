#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int words(const char sentence[ ])
{
    int counted = 0; // result
 
    // state:
    const char* it = sentence;
    int inword = 0;
 
    do switch(*it) {
        case '\0': 
        case ' ': case '\t': case '\n': case '\r': // TODO others?
            if (inword) { inword = 0; counted++; }
            break;
        default: inword = 1;
    } while(*it++);
 
    return counted;
}



int main(){
	FILE *f1, *f2;
	int i, j, count=0;
	char str[1000];

	f1 = fopen("data5.txt", "r");
	f2 = fopen("data55.txt", "a+");


	while(!feof(f1)){
		fgets(str, sizeof(str), f1);
		if(!feof(f1))printf("%d\n", words(str));
	}
	fprintf(f2, "%d\n", words(str));
	fclose(f1);
	fclose(f2);
}
