#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

struct mhs{
	char nim[15];
	int uts, uas;
};
typedef struct mhs mhs;

int main(){
	mhs dt[100];
	FILE *f1;
	int i =0;
	f1 = fopen("data4.txt", "r");

	while(!feof(f1)){
	fscanf(f1, "%s %d %d", dt[i].nim, &dt[i].uts, &dt[i].uas);
	i++;
	}

}
