#include<stdio.h>

int main(){
	int n;
	int arr[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *p = &arr[n-1];
	for(int i=0;i<n;i++){
		printf("%d ",*p);
		p--;
	}
	return 0;
}
