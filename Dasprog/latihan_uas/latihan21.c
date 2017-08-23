#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
struct dokumen {
   char kata[50];
   int posisi[50];
   int jumlah;
};
typedef struct dokumen DOK;
void hapusChar(char str[], char t) {
    int i,j;
    i = 0;
    while(i<strlen(str)) {
        if (str[i]==t) { 
            for (j=i; j<strlen(str); j++)
                str[j]=str[j+1];   
        } else i++;
    }
}
int main() {
   int n=0,i,j;
   DOK list[SIZE];
   char st[256];
   char *t;
   while( fgets(st, sizeof(st), stdin) ) {
	   t=strtok(st,",");  hapusChar(t,'"'); 
	   strcpy(list[n].kata,t);
	   i=0;
	   while (t=strtok(NULL,","))
		   list[n].posisi[i++]=atoi(t);
	   list[n].jumlah=i;
	   n++;
   }
   for(i=0;i<n;i++) {
	   printf("%s(%d):",list[i].kata,list[i].jumlah);
	   for(j=0;j<list[i].jumlah;j++) {
		   printf("%d",list[i].posisi[j]);
		   if (j==list[i].jumlah-1) printf("\n");
		   else printf("->");
	   }
   }
   return 0;
}
