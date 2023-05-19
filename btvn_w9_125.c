#include<stdio.h>
#include<math.h>
int check(double *arr,int n, double tb){
	int saveI=0;
	double minc=100000;
	for(int i=0;i<n;i++){
		if(abs(*(arr+i)-tb)<minc){
			minc = abs(*(arr+i)-tb);
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
	tb /= n;
	int kq = check(arr,n,tb);
	printf("%d\n",tb);
	printf("%lf",arr[kq]);
	return 0;
}
