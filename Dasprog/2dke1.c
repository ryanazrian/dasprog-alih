#include <stdio.h>

void printarray(int n, int a[n]) {

int i;

for (i=0; i<n; i++) printf("%d\n", a[i]);

}

int main() {

int x[5][4],i,j,k=0;

for(i=0;i<5;i++)

for(j=0;j<4;j++) x[i][j]=++k;

printarray(20,x);

return 0;

}
