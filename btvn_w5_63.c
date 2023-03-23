#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int n;
	n = (a>=b) ? b : a;
	n = (n>=c) ? c : n;
	printf("%d",n);
	return 0;
}
