#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int kq;
	if (n<=50){
		kq = n*500;
	}
	else if(n<=100){
		kq = 50*500 + (n-50)*1000;
	}
	else if(n<=150){
		kq = 50 * 500 + 50 * 1000 + (n-100)*1200;
	}
	else{
		kq = 50 * 500 + 50 * 1000 + 50 * 1200 + (n-150)*1600;
	}
	printf("So dien tieu thu trong thang la: %d\n",n);
	printf("So tien phan tra la            : %d",kq);
	return 0;
}
