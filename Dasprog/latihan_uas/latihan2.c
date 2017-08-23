#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct kota{
	char nama[100];
	int halaman[100];
	int jumlah;
};
typedef struct kota kotagede;

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
	kotagede dt[1000];
	int i, j, n, count[1000]={0};
	char str[1000], *ptr;
	
	for(i=0;i<3;i++){
		fgets(str, sizeof(str), stdin);
		ptr = strtok(str, ","); hapuschar(ptr, '"'); strcpy(dt[i].nama, ptr);
		j=0;
		while(ptr=strtok(NULL, ",")){
			ptr = strtok(NULL, ",");
			dt[i].halaman[j++] = atoi(ptr);	
		}
		dt[i].jumlah = j;
	}
	for(i=0;i<3;i++){
		printf("%s (%d)",dt[i].nama, dt[i].jumlah);
		for(j=0;j<dt[i].jumlah;j++){
			printf("%d", dt[i].halaman[j]);
			if(j!=count[i]-1){printf("->");}
		}
	printf("\n");
	}
}
