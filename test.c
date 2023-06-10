#include<stdio.h>

int main(){
	int n = 100;
	int *p1 = &n;
	int *p2 = p1;
	int *p3 = p2;
	*p3 = 20;
	printf("%d",n);
	return 0;
}
