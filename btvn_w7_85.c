#include<stdio.h>
#include<math.h>

double gt(double k){
	if(k==0){
		return 1;
	}else{
		return k*gt(k-1);
	}
}

double mu(double a, int b){
	int i;
	double kq=1;
	for(i=1;i<=b;i++){
		kq*=a;
	}
	return kq;
}

int main(){
	double x;
	scanf("%lf",&x);
	double dau,tu,mau,ps;
	int n = 0;
	double sum = 0;
	do{
		dau = mu(-1,n);
		tu = mu(x,2*n+1);
		mau = gt(2*n+1);
		ps = tu/mau;
		sum += dau*(tu/mau);
		n++;
	}while(ps>=1e-4);

	printf("%.6f",sum);
	return 0;
}
