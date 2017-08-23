#include<stdio.h>

int main(){
	int i, j, k, n, count=0;
	int angka[100], batas, perbaikan;	

	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &angka[i]);
		count+=angka[i];
	}
	scanf("%d %d", &batas, &perbaikan);
	float hitung=0;

	for(i=1;i<=n;i++){
		if(angka[i]<=perbaikan && angka[i]>=batas){
			hitung++;
		}
	}
	printf("%0.f dari %d (%0.f%) siswa bisa ikut ujian perbaikan\n", hitung, n, (float)(hitung/n)*100);
}
