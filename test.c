#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
	int a,i;
	double tong,epsi;
	tong=1.00;
	scanf("%lf",&epsi);
	for (i=1;;i++){
		tong = tong + (pow(-1,i))*1.0/(2*i+1);
		
		if((1.0/(2*i+1))<epsi) {
			break;
		}
	}
	tong = tong + (pow(-1,i))*1.0/(2*i+1);
	printf("%.2f",4*tong);
}
