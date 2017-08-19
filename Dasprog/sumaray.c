
#include <stdio.h>

int sumarray(int a[], int n);

int main() {

int x[5] = {1,4,2,-3,9};

printf("%d", sumarray(x,5));

return 0;

}

int sumarray(int a[], int n) {

int i, sum = 0;

for (i=0; i<n; i++) sum+=a[i];

return sum;

}
