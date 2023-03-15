#include<stdio.h>

int main(){
	char c;
	int i;
	float f;
	double d;
	c = getchar();
	scanf("%d",&i);
	scanf("%f",&f);
	scanf("%lf",&d);
	printf("%c\n",c);
	printf("%d\n",i);
	printf("%.2f\n",f);	
	printf("%.2f",d);
	return 0;
}
