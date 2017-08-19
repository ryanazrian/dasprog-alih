
#include <stdio.h>
#define SIZE 100
void printmatrix(int m, int n, int b[SIZE][SIZE]) {
	int i,j;
	for (i=0; i<m; i++)
	   for (j=0; j<n; j++) {
         printf("%d", b[i][j]);
         if (j==n-1) printf("\n");
         else printf(" ");
       }
}
void fliph(int m, int n, int a[SIZE][SIZE], int b[SIZE][SIZE]) {
	int i,j,t;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++)
			b[i][j]=a[i][n-j-1];
	}
}

int main()
{
	int m,n,i,j;
	int a[SIZE][SIZE],b[SIZE][SIZE];
	scanf("%d %d", &m, &n);
	for (i=0; i<m; i++)
	   for (j=0; j<n; j++)
	      scanf("%d", &a[i][j]);
	fliph(m,n,a,b);
	printmatrix(m,n,b);
	return 0;
}
