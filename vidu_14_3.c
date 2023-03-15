#include "stdio.h"
#define PI 3.14

int main(){
	double r;
	scanf("%lf",&r);
	double s = PI * r * r;
	printf("%.2f\n",s);
	double c = PI * 2 * r;
	printf("%.2f",c);
	return 0;
}
