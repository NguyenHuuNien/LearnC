#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float F = ((a+b+sqrt(c))/(a*a+b*b+1))-fabs(sin(a)-c*cos(b));
	printf("%.2f",F);
	return 0;
}
