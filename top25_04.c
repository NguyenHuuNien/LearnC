#include<stdio.h>
#include<math.h>

int main(){
	int n,i,j;
	int x[100],y[100];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	int so_diem=1;
	double kq=10000000.0;
	double maxc=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if(i!=j){
				maxc += sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			}
		}
		if(kq>maxc){
			kq=maxc;
			so_diem=i;
		}
		maxc=0;
	}
	printf("%d %.3f",so_diem+1,kq);
	return 0;
}
