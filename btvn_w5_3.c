#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int kq = (a>b)?a:b;
	kq = (kq>c)?kq:c;
	printf("%d",kq);
	return 0;
}
