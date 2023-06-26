#include<stdio.h>

int bnr(int arr[],int l, int r, int x){
	if(l>r){
		return -1;
	}
	int mid = (r+l)/2;
	if(arr[mid]==x){
		return mid;
	}else{
		if(arr[mid]>x){
			return bnr(arr,l,mid-1,x);
		}else{
			return bnr(arr,mid+1,r,x);
		}
	}
}

int main(){
	int n,x;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap so muon tim: x = ");
	scanf("%d",&x);
	int kq = bnr(arr,0,n-1,x);
	if(kq == -1){
		printf("%d khong ton tai trong mang");
	}else{
		printf("%d nam tai vi tri thu %d cua mang",x,kq+1);
	}
	return 0;
}
