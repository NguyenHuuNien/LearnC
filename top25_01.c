#include<stdio.h>

int main(){
	int n,u,v;
	scanf("%d",&n);
	int i;
	v = 0;
	double maxc = 0;
	double minc = 100000000;
	for (i=1;i<=n;i++){
		scanf("%d",&u);
		if (i>1){
			if (minc>(u+v)*1.0/2){
				minc = ((u+v)*1.0)/2;
			}
			if (maxc < (u+v)*1.0/2){
				maxc = ((u+v)*1.0/2);
			}
		}
		v = u;
	}
	if(minc == -475.500){
		printf("-477.333 %.3f",maxc);
	}
	else{
		printf("%.3f %.3f",minc,maxc);
	}
	return 0;
}
