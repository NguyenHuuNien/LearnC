#include<stdio.h>

int check(int arr[], int l, int r){
	if(l>r){
		return 1;
	}else if(arr[l]!=arr[r]){
		return 0;
	}else{
		return check(arr,l+1,r-1);
	}
}

int main(){
	int arr[] = {1,2,3,4,3,2,1};
	printf("%d",check(arr,0,6));
	return 0;
}
