#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	if(n<2){
		printf("KHONG");
		return 0;
	}
	else if(n<4){
		printf("CO");
		return 0;
	}
	else{
		for (i=2;i<=sqrt(n);i++){
			if (n%i==0){
				printf("KHONG");
				return 0;
			}
		}
	}
	printf("CO");
	return 0;
}
