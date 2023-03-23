#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==0){
		if(b==0){
			if(c==0){
				printf("Vo so nghiem");
			}
			else{
				printf("Vo nghiem");
			}
		}
		else{
			printf("%.2f",-c/b);
		}
	}
	else{
		float delta = b*b - 4*a*c;
		if (delta<0){
			printf("Vo nghiem");
		}
		else{
			if(delta == 0){
				printf("%.2f",-b / (2*a));
			}
			else{
				printf("%.2f\n",(-b - sqrt(delta)) / (2*a));
				printf("%.2f",(-b + sqrt(delta)) / (2*a));
			}
		}
	}
	return 0;
}
