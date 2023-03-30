#include<stdio.h>
#include<math.h>

int TD(int a,int b,int c){
	double choose1 = sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
	double choose2 = sqrt((x[c]-x[b])*(x[c]-x[b])+(y[c]-y[b])*(y[c]-y[b]));
	double choose3 = sqrt((x[a]-x[c])*(x[a]-x[c])+(y[a]-y[c])*(y[a]-y[c]));
	if(choose1>choose2 && choose1>choose3){
		
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	if(n==2){
		printf("%.3f",sqrt(((x[0]-x[1])/2.0)*((x[0]-x[1])/2.0)+((y[0]-y[1])/2.0)*((y[0]-y[1])/2.0)));
	}else if(n==1){
		printf("0");
	}else{
		int j,k,l;
		for(i=0;i<n-2;i++){
			for(j=i+1;j<n-1;j++){
				for(k=j+1;k<n;k++){
					TD(i,j,k);
					
				}
			}
		}
	}
	return 0;
}
