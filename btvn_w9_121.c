#include<stdio.h>

int countEven(int* arr, int n){
	int *p = arr;
	int kq=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			kq++;
		}
	}
	return kq;
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int kq = countEven(arr,n);
	printf("%d",kq);
	return 0;
}
