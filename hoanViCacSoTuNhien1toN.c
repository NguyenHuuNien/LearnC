#include<stdio.h>
int n,x[100];

void inC(){
	for(int i=1;i<=n;i++){
		printf("%d",x[i]);
	}
	printf("\n");
}

void testC(int i){
	for(int j=1;j<=n;j++){
		x[i] = j;
		if(i==n){
			inC();
		}else{
			testC(i+1);
		}
	}
}

int main(){
	n = 3;
	testC(1);
	return 0;
}
