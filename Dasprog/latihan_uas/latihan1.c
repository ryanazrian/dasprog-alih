#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct MHS{
	char nim[19];
	char nama[200];
	int jenkel, usia;	
	float nilai;

};
typedef struct MHS mhs;

void hapuschar(char str[], char t){
	int i, j;
	for(i=0;i<strlen(str);i++){
		if(str[i]==t){
			for(j=i;j<strlen(str);j++){
				str[j] = str[j+1];
			}
		}
	}
}

int main(){
	mhs dt[1000];
	int i=0, j, n;
	char str[1000], *nilai, *usia, *jenkel, *nim, *nama;
	char *ptr;
	float rata, total=0;
	for(int k=0;k<3;k++){
		fgets(str, sizeof(str), stdin);
		ptr = strtok(str, ","); hapuschar(ptr, '"'); strcpy(dt[i].nama, ptr);
		ptr = strtok(NULL, ","); hapuschar(ptr, '"'); strcpy(dt[i].nim, ptr);
		usia = strtok(NULL, ","); dt[i].usia = atoi(usia);
		jenkel  = strtok(NULL, ","); dt[i].jenkel  = atoi(jenkel);
		nilai = strtok(NULL, ","); dt[i].nilai = atof(nilai);
		i++;
	}
	for(j=0;j<i;j++){
		total+=dt[j].nilai;
	}
	rata = (float)total/i;
	printf("%.2f\n", rata);
	for(j=0;j<i;j++){
		if(dt[j].nilai<rata){
			printf("%s\n", dt[j].nama);
		}
	}		
}
