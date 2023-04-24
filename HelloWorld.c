#include<stdio.h>
int gt(int k){
	if(k==0 || k==1){
		return 1;
	}
	else{
		return k*gt(k-1);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",gt(2-n+1));
	return 0;
}
