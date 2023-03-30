#include<stdio.h>

int main(){
	int n,i,j;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long int sum;
	long int minc = 10000000;
	for(i=0;i<n;i++){
		j=i+1;
		sum=0;
		while(i!=j){
			sum+=a[j];
			if (minc>sum){
				minc = sum;
			}
			if(j>=n-1){
				j=0;
			}else{
				j++;
			}
		}
	}
	printf("%d",minc);
	return 0;
}
