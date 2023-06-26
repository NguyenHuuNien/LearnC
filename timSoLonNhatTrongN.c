#include<stdio.h>

int check(int n){
	if(n<10){  //1983
		return n;
	}else{
		int k = check(n/10);
		if(k < n%10){
			return n%10;
		}else{
			return k;
		}
	}
}

int main(){
	int n;
	printf("Nhap so tu nhien n = ");
	scanf("%d",&n);
	printf("so lon nhat trong so tu nhien %d la %d",n,check(n));
	return 0;
}
