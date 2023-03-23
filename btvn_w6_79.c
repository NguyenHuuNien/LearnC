#include<stdio.h>

int main(){
	float s = 0;
	int i,n;
	scanf("%d",&n);
	for (i = 1; i<=n;i++){
		s += 1.0/i;
	}
	printf("%.2f",s);
	return 0;
}
