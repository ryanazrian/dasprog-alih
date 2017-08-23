#include<stdio.h>
#define PI 3.1415
#define luas(r) (PI*r*r)
int main(){
	float luas;
	int radius;
	scanf("%d", &radius);
	luas = luas(radius);
	printf("%.2f\n",luas(radius));

}
