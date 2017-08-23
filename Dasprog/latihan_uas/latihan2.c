#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

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
	int i, j, n;
	char str[1000], *ptr;
	i=0;
	while(fgets(str, sizeof(str), stdin)){
		ptr = strtok(str, ","); hapuschar(ptr, '"'); strcpy(dt[i].nama, ptr);
		j=0;
		while(ptr=strtok(NULL, ",")){
			dt[i].halaman[j++] = atoi(ptr);	
		}
		dt[i].jumlah = j;
		i++;	
	}	
	for(int n=0;n<i;n++){
		printf("%s (%d):",dt[n].nama, dt[n].jumlah);
		for(j=0;j<dt[n].jumlah;j++){
			printf("%d", dt[n].halaman[j]);
			if(j!=dt[n].jumlah-1){printf("->");}
			else printf("\n");
		}
	}
}
