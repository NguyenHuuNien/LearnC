#include<stdio.h>

int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a+b>c && a+c>b &&b+c>a){
		printf("CO");
	}
	else{
		printf("KHONG");
	}
	return 0;
}
