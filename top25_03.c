#include<stdio.h>

double max(double a, double b){
	if (a<b){
		return b;
	}
	else{
		return a;
	}
}

int main(){
	int i,n,x,y,maxc;
	scanf("%d",&n);
	double temp = 0;
	for (i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		temp = max(temp,(x+y)/2.0);
	}
	printf("%.3f",temp);
	return 0;
}
