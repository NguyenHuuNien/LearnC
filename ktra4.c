#include<stdio.h>

int main(){
	int i;
	long n;
	long long kq=0;
	scanf("%ld",&n);
	for(i=2;i<=sqrt(n);i+=2){
		if(n%i==0){
			kq+=i;
			kq+=n/i;
		}
	}
//	if(n%2==0){
//		kq+=n;
//	}
	printf("%lld",kq);
	return 0;
}
