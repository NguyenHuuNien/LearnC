#include<stdio.h>

int main(){
	int n,i;
	int kq = 0;
	int chan = 0;
	scanf("%d",&n);
	for (i = 1;i<=n;i++){
		kq += i;
		if (i%2==0){
			chan +=i;
		}
	}
	printf("%d\n",kq);
	printf("%d\n",chan);
	printf("%d",kq-chan);
	return 0;
}
