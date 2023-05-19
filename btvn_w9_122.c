#include<stdio.h>

double *maxi(double *arr, int s){
	double *maxc = arr;
	for(int i=0;i<s;i++){
		if(*(arr+i)>*maxc){
			maxc = arr+i;
		}
	}
	return maxc;
}

int main(){
	int n;
	scanf("%d",&n);
	double arr[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&arr[i]);
	}
	double *kq = maxi(arr,n);
	printf("%f",*kq);
	return 0;
}
