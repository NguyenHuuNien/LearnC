#include<stdio.h>

int n,x[100];

void in(){
	for(int i=1;i<=n;i++){
		printf("%d",x[i]);
	}
	printf("\n");
}

void test(int i){
	for(int j=0;j<=1;j++){
		x[i] = j;
		if(i == n){
			in();
		}else{
			test(i+1);
		}
	}
}

int main(){
	n = 3; // in nhi phan co 3 so
	test(1);
	return 0;
}
