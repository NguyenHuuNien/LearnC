#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int tram,donvi,chuc;
	tram = n/100;
	donvi = n%10;
	chuc = (n%100)/10;
	printf("%d %d %d",tram,chuc,donvi);
	return 0;
}
