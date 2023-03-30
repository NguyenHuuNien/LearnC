#include<stdio.h>

int main(){
	int arr[1000];
	int n,i,j;
	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	int kq = 1;
	for(i=0;i<n-1;i++){
		if (arr[i]!=arr[i+1]){
			kq++;
		}
	}
	int jon=1;
	printf("%d\n",kq);
	i=0;
	while(i<n){
		while(arr[i]==arr[i+1]){
			jon ++;
			i++;
		}
		printf("%d %d\n",arr[i],jon);
		jon = 1;
		i++;
	}
	
	return 0;
}
