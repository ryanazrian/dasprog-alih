#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void substring(char *dest, char *source, int a, int n){
	int i=a;
	for(;i<a+n;i++) dest[i-a] = source[i];
	dest[i-a] = '\0';
}

struct mhs{
	char nim[100];
	int uts;
	int uas;
};
typedef struct mhs mhs;

int main(){
	mhs dt[100];
	char str[1000], nim[100], swap[1000], uts[100], uas[100];
	int uts1, uas1, count=0, i=0, nim1[100];
	FILE *f1;

	f1 = fopen("data4.txt", "r");
	while(!feof(f1)){
		fgets(str, sizeof(str), f1);
		substring(dt[i].nim, str, 0, 9);
		substring(uts, str, 10, 12); dt[i].uts = atoi(uts);
		substring(uas, str, 13, 14); dt[i].uas = atoi(uas);
		i++;
		count++;
	}
	for(i=0;i<count;i++){
		substring(nim, dt[i].nim, 7, 8);
		nim1[i] = atoi(nim);
	}
	for(i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(nim1[i]>nim1[j]){
				strcpy(swap, dt[i].nim);
				strcpy(dt[i].nim, dt[j].nim);
				strcpy(dt[j].nim, swap);
				
				uts1= dt[i].uts;
				dt[i].uts = dt[j].uts;
				dt[j].uts = uts1;
				
				uas1 = dt[i].uas;
				dt[i].uas = dt[j].uas;
				dt[j].uas = uas1;
			}
		}
	}
	for(i=1;i<count;i++){
		printf("%s %d %d\n", dt[i].nim, dt[i].uts, dt[i].uas);
	}
}
