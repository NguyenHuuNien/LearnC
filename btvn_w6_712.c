#include<stdio.h>

int main(){
	double e;
	scanf("%lf",&e);
	double pi = 0;
	// 4*((-1)^i * 1/(2i+1))
	int i = 0;
	int mu = 1;
	double pt = 1.0/(2*i+1);
	while(e<=pt){
		pi += mu*pt;
		mu *= -1;
		pt = 1.0/(2*++i+1);
	}
	// pi phai cong them voi do chinh xac nua, giong khai trien taylo trong giai tich
	printf("%.2f",(pi+(mu*pt))*4); 
	return 0;
}
