#include <stdio.h>
#define SIZE 100
int main() {
int a[SIZE], i, n;
scanf("%d", &n); // baca banyaknya data
// membaca masukan dan disimpan ke array
for (i=0; i<n; i++) scanf("%d", &a[i]);
printf("%d\n", a[n/2]); // akses isi array
return 0;
}
