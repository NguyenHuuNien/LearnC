#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0&&n%3==0&&n%5!=0){
		printf("2 3");
		return 0;
	}
	if(n%2==0&&n%5==0&&n%3!=0){
		printf("2 5");
		return 0;
	}
	if(n%3==0&&n%5==0&&n%2!=0){
		printf("3 5");
		return 0;
	}
	printf("-1");
	return 0;
}
