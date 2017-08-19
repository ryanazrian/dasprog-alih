#include<stdio.h>
#include<string.h>
int main(){
	int n, array[10000], lulus, batas;
	int i;
	float count=0;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &array[i]);
		}
		
	scanf("%d %d", &lulus, &batas);
	for(i=0;i<n;i++){
		if(array[i]>=lulus && array[i]<=batas){
			count++;
			}
		}
	printf("%0.f dari %d (%0.f%) siswa bisa ikut ujian perbaikan\n", count,  n, (float)count/n*100); 
	 
	}
