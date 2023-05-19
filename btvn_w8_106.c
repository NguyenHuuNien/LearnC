#include<stdio.h>

int sx(int arr[],int brr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			if(brr[i]>brr[j]){
				int temp = brr[i];
				brr[i] = brr[j];
				brr[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]!=brr[i]){
			printf("Khong");
			return 0;
		}
	}
	printf("Co");
	return 0;
}

int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n],brr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&brr[i]);
	}
	sx(arr,brr,n);
	return 0;
}
