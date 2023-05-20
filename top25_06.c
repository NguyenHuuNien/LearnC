#include<stdio.h>

int main(){
	int n,S,K;
	scanf("%d%d%d",&n,&S,&K);
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i] = i;
	}
	int i=0, r=0;
	int sl = n;
	while(sl>1){
		if(r==S){
			r=0;
			arr[i]=0;
			sl--;
		}
		r++;
		i++;
		if(i==n){
			i=0;
		}
	}
	printf("%d",)
	return 0;
}
