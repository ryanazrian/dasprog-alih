#include <stdio.h>

int main() {
#ifdef N
printf("1\n");
#endif
printf("2\n");
#if 10>9
printf("3\n");
#endif
return(0);
}
