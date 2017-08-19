#include<stdio.h>

int main(){
	int a[80], b[80], c[80], i, j, count=0, count1=0;
	
	for(i=0;;i++){
		scanf("%d", &a[i]);
		count1++;
		if(a[i]==-9){break;}
	}
		
	for(i=0;;i++){
		scanf("%d", &b[i]);
		count++;
		if(a[i]==-9){break;}
	}
	
	i=0;
	for(j=0;j<=count+count1;j++){
			if(j<count1){
				c[i] = a[j];
			}
			i++;
			if(j<count){
				c[i] = b[j];
			}
			i++;
	}
	
	for(i=0;i<=count+count1;i++){
		printf("%d ", c[i]);
		}
}
