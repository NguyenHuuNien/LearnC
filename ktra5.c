#include<stdio.h>

int main(){
	int n,i;
	int kq=0;
	scanf("%d",&n);
	while(n>0){
		if(n%2!=0){
			kq++;
		}
		n/=2;
	}
	printf("%d",kq);
	return 0;
}
