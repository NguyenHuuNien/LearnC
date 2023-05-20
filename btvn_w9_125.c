#include<stdio.h>

int check(double *arr,int n, double tb){
	int saveI=0;
	double minc=100000;
	for(int i=0;i<n;i++){
		// tinh khoang cach giua cac phan tu
		double space = *(arr+i)-tb; 
		// neu khoang cach am thi chuyen thanh duong
		if(space<0){
			space *= -1;
		}
		// tim gia tri khoang cach nho nhat va save vi tri phu hop
		if(space<minc){
			minc = space;
			saveI = i;
		}
	}
	return saveI;
}

int main(){
	int n;
	scanf("%d",&n);
	double arr[n];
	double tb = 0;
	for(int i=0;i<n;i++){
		scanf("%lf",&arr[i]);
		tb+=arr[i];
	}
	// tinh trung binh cong cac phan tu
	tb /= n;
	int kq = check(arr,n,tb); // ham tra ve vi tri phu hop
	printf("%f",arr[kq]);
	return 0;
}
