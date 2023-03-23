#include<stdio.h>
#include <stdbool.h>

int main(){
	int n;
	bool a;
	int tram,chuc,donvi;
	int i=32;
	int k = 0;
	scanf("%d",&n);
	for (i; i<n; i++){
		tram = i/100;
		donvi = i%10;
		chuc = (i%100)/10;
		if(tram+donvi == chuc){
			a = true;
		}
		else{
			a = false;
		}
		if (i%3==0 && a==true){
			printf("%d ",i);
			k++;
		}
		if(k==10){
			printf("\n");
			k=0;
		}
	}
	
	return 0;
}
