#include<stdio.h>
// bài này de ao vl

int gt(int a){
	if(a==0){
		return 1;
	}
	else{
		return a*gt(a-1);
	}
}

int main(){
	double n;
	double e= 0;
	scanf("%lf",&n);
	int i = 0;
	while (1.0/gt(i)>n){
		e += 1.0/gt(i);
		i++;
	}
	e += 1.0/gt(i);
	printf("%.2f",e);
	return 0;
}
