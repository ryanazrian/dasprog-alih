#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void substring(char *dest, char *source, int a, int n){
	int i=a;
	for(;i<a+n;i++) dest[i-a] = source[i];
	dest[i-a]='\0';
}

struct mhs{
	char nim[15];
	int uts, uas;
};
typedef struct mhs mhs;

int main(){
	mhs dt[100];
	FILE *f1;
	int i =0, uts1, uas1, nim1[100], j;
	char str[1000], uts[10], uas[10], nim[100];
	f1 = fopen("data4.txt", "r");
	int count =0;
	char swap[1000];
	while(!feof(f1)){
		if(!feof(f1)){
			fgets(str, sizeof(str), f1);
			substring(dt[i].nim, str, 0, 9);
			substring(uts, str, 10, 12); dt[i].uts = atoi(uts);
			substring(uas, str, 13, 14); dt[i].uas = atoi(uas);
			i++;
			count++;
		}
	}
	for(j=0;j<count;j++){
	substring(nim, dt[j].nim, 7, 8);
        nim1[j] = atoi(nim);
	}


	for(int c=0;c<count;c++){
		for(int d=c+1;d<count;d++){
			if(nim1[c]>nim1[d]){
				strcpy(swap, dt[d].nim);
				strcpy(dt[d].nim, dt[c].nim);
				strcpy(dt[c].nim, swap);

				uts1 = dt[d].uts;
				dt[d].uts = dt[c].uts;
				dt[c].uts = uts1;

				uas1 = dt[d].uas;
				dt[d].uas = dt[c].uas;
				dt[c].uas = uas1; 
			}
		}

	}
	j=i;
	for(i=1;i<=j-1;i++){
	printf("%s %d %d\n", dt[i].nim, dt[i].uts, dt[i].uas);
	}
	fclose(f1);

}
