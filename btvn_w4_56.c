#include<stdio.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float delta = (b*b)-(4*a*c);
	printf("%.2f\n",(-b-sqrt(delta))/(2*a));
	printf("%.2f",(-b+sqrt(delta))/(2*a));
	return 0;
}
